/*
ex 12 p 250
Elabore um programa que: preencha uma matriz 6 ! 4; 
recalcule a matriz digitada, onde cada linha de-verá ser 
multiplicada pelo maior elemento da linha em questão; 
mostre a matriz resultante
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
//Procedimento para multiplicar elementos da mesma linha pelo seu maior valor.
void multiplicaLinhaMaiorNumero(int n1, int n2, int m [n1] [n2])
{
    int maiorNumero;
    for ( int j = 0; j < n2; j++)
    {
        if (j > j -1)
        {
            maiorNumero = j;
        }
        
    }
    printf("%d", maiorNumero);
}