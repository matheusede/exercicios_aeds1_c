/*
ex7 p249
Elabore um programa que preencha uma matriz M de ordem 4 ! 6 e uma segunda matriz N de ordem 6 !4, 
calcule e imprima a soma das linhas de M com as colunas de N
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

//Procedimento para realizar soma entre matrizes.
void somaMatrizes(int n1, int n2, int n3, int n4, int m1 [n1] [n2], int m2 [n3] [n4])
{
    int i, j;
    
     
}