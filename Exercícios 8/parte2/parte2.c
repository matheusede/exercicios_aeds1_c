/*
parte 2
Faça uma função para calcular a 
multiplicação de duasmatrizesn x n.
*/

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

//Função para multiplicar duas matrizes nxn.
void multiplicaMatrizesMesmoTamanho(int n1, int n2, int m1 [n1] [n2], int m2 [n1] [n2])
{
    int i, j;
    for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            printf("%d + %d = %d.\n", m1 [i] [j], m2 [i] [j], m1 [i] [j] * m2 [i] [j]);
        }
    }
}

int main(void)
{
    //Declaração de variáveis.
    int m1[3] [3], m2 [3] [3];

    //Leitura dos valores.
    printf("Primeira matriz.\n");
    lerMatriz(3, 3, m1);
    printf("Segunda matriz.\n");
    lerMatriz(3, 3, m2);

    //Cálculo e output de dados..
    multiplicaMatrizesMesmoTamanho(3, 3, m1, m2);

    return 0;
}