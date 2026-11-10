#include <stdio.h>

/* Fatorial: n! = n * (n-1) * ... * 1  (funciona ate n = 20) */
unsigned long long fatorial(int n) {
    unsigned long long f = 1;
    for (int i = 2; i <= n; i++)
        f = f * i;
    return f;
}

/* Permutacao simples: P(n) = n! */
unsigned long long permutacao(int n) {
    return fatorial(n);
}

/* Arranjo simples: A(n,p) = n! / (n-p)! */
unsigned long long arranjo(int n, int p) {
    return fatorial(n) / fatorial(n - p);
}

/* Combinacao simples: C(n,p) = n! / (p! * (n-p)!) */
unsigned long long combinacao(int n, int p) {
    return fatorial(n) / (fatorial(p) * fatorial(n - p));
}

/* Triangulo de Pascal: o elemento da linha i, coluna j e C(i,j) */
void trianguloPascal(int linhas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j <= i; j++)
            printf("%llu ", combinacao(i, j));
        printf("\n");
    }
}

int main() {
    int opcao, n, p;

    do {
        printf("\n----MENU----\n");
        printf("0 - Encerrar programa\n");
        printf("1 - Triangulo de Pascal\n");
        printf("2 - Arranjo\n");
        printf("3 - Permutacao simples\n");
        printf("4 - Combinacao\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o numero de linhas: ");
                scanf("%d", &n);
                if (n < 1 || n > 21)
                    printf("Valor invalido (use de 1 a 21).\n");
                else
                    trianguloPascal(n);
                break;

            case 2:
                printf("Digite o valor de n: ");
                scanf("%d", &n);
                printf("Digite o valor de p: ");
                scanf("%d", &p);
                if (n < 0 || n > 20 || p < 0 || p > n)
                    printf("Valores invalidos (0 <= p <= n <= 20).\n");
                else
                    printf("A(%d,%d) = %llu\n", n, p, arranjo(n, p));
                break;

            case 3:
                printf("Digite o valor de n: ");
                scanf("%d", &n);
                if (n < 0 || n > 20)
                    printf("Valor invalido (use de 0 a 20).\n");
                else
                    printf("P(%d) = %llu\n", n, permutacao(n));
                break;

            case 4:
                printf("Digite o valor de n: ");
                scanf("%d", &n);
                printf("Digite o valor de p: ");
                scanf("%d", &p);
                if (n < 0 || n > 20 || p < 0 || p > n)
                    printf("Valores invalidos (0 <= p <= n <= 20).\n");
                else
                    printf("C(%d,%d) = %llu\n", n, p, combinacao(n, p));
                break;

            case 0:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
