/*
Ex8 p250
Crie um programa que preencha duas matrizes 3 X 8 com números inteiros, calcule e mostre:
■a soma das duas matrizes, resultando em uma terceira matriz também de ordem 3 X 8; 
■a diferença das duas matrizes, resultando em uma quarta matriz também de ordem 3 X 8. 
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

//Procedimento para ler inputs do usuário (matriz).
void lerMatriz(int n1, int n2, int m[n1] [n2])
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("Digite o elemento da linha %d e coluna %d: ", i, j);
            scanf("%d", &m[i] [j]);
            printf("\n");
        }
    }
}

//Procedimento para realizar soma entre duas matrizes com o mesmo tamanho.
void somaMatrizesMesmoTamanho(int n1, int n2, int m1 [n1] [n2], int m2 [n1] [n2])
{
    int i, j;
    for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            printf("%d + %d = %d.\n", m1 [i] [j], m2 [i] [j], m1 [i] [j] + m2 [i] [j]);
        }
    }
}
//Procedimento para realizar subtração entre duas matrizes com o mesmo tamanho.
void subtraiMatrizesMesmoTamanho(int n1, int n2, int m1 [n1] [n2], int m2 [n1] [n2])
{
    int i, j;
    for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            printf("%d - %d = %d.\n", m1 [i] [j], m2 [i] [j], m1 [i] [j] - m2 [i] [j]);
        }
    }
}

int main(void)
{
    //Declaração de variáveis.
    int i, j, m1 [3] [8], m2 [3] [8];

    //Leitura dos inputs.
    printf("Primeira matriz.\n");
    lerMatriz(3, 8, m1);
    printf("Segunda matriz.\n");
    lerMatriz(3, 8, m2);

    //Soma entre as matrizes
    printf("Soma entre as matrizes.\n");
    somaMatrizesMesmoTamanho(3, 8, m1, m2);
    //Subtração.
    printf("Subtração entre as matrizes.\n");
    subtraiMatrizesMesmoTamanho(3, 8, m1, m2);

    return 0;
}