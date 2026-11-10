Análise Combinatória em C

Programa em linguagem C, executado no terminal, que calcula Triângulo de Pascal, Arranjo simples, Permutação simples e Combinação simples através de um menu interativo.

Funcionalidades
Opção	Operação	Fórmula	Entrada
1	Triângulo de Pascal	elemento da linha i, coluna j = C(i, j)	número de linhas
2	Arranjo simples	A(n, p) = n! / (n − p)!	n e p
3	Permutação simples	P(n) = n!	n
4	Combinação simples	C(n, p) = n! / (p! · (n − p)!)	n e p
0	Encerrar programa	—	—
Como funciona

O programa exibe um menu e, de acordo com a opção escolhida, pede os valores necessários, calcula o resultado e mostra na tela. Depois volta ao menu, até que o usuário digite 0.

Todas as operações são construídas a partir de uma única função fatorial, seguindo as fórmulas da matemática. O Triângulo de Pascal reaproveita a função de combinação para gerar cada elemento.

Como compilar e executar

É necessário ter um compilador C instalado (por exemplo, o GCC).

bash
gcc analise_combinatoria.c -o analise
./analise

No Windows, execute analise.exe no lugar de ./analise.

Exemplo de uso
----MENU----
0 - Encerrar programa
1 - Triangulo de Pascal
2 - Arranjo
3 - Permutacao simples
4 - Combinacao
Escolha: 1
Digite o numero de linhas: 5
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
Escolha: 2
Digite o valor de n: 5
Digite o valor de p: 3
A(5,3) = 60
Limitações

Os cálculos usam unsigned long long, que suporta fatorial até 20!. Por isso:

n deve estar entre 0 e 20;
p deve satisfazer 0 ≤ p ≤ n;
o Triângulo de Pascal aceita até 21 linhas.

Valores fora desses limites são recusados com uma mensagem de erro.

Estrutura
.
├── analise_combinatoria.c
└── README.md
Autor

Desenvolvido por {Dheryck}.
