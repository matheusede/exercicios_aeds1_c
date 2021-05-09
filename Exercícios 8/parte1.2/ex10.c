/*
EX10 P250
Crie um programa que preencha uma matriz 5 ! 5 
com números inteiros, calcule e mostre a soma:
■dos elementos da linha 4; 
■dos elementos da coluna 2; 
■dos elementos da diagonal principal; 
■dos elementos da diagonal secundária; 
■de todos os elementos da matriz. 
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

//Procedimento para somas elementos da mesma linha
int somaMesmaLinha(int n1, int n2, int m [n1] [n2], int linha)
{
    int soma = 0;
    for (int i = linha; i < linha + 1; i++)
    {
        for ( int j = 0; j < n2; j++)
        {
            soma += m [i] [j]; 
        }
        
    }
    
}