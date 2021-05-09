/*
Faça um programa que preencha uma matriz 3 x 5 com números inteiros, 
calcule e mostre a quantidade de elementos entre 15 e 20.
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

int main(void)
{
    //Declaração de variáveis.
    int m[3] [5], i, j, entre15e20 = 0;

    //Leitura da matriz;
    lerMatriz(3, 5, m);

    //Quantificação
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if (m [i] [j] >= 15 && m [i] [j] <=20)
            {
                entre15e20 ++;
            }
        }
    }
    
    printf("O número de elementos entre 15 e 20 foi igual a %d.", entre15e20);
    return 0;
}