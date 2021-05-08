/*
ex19 p192
Faça um programa que leia dois vetores de dez posições e 
faça a multiplicação dos elementos de mesmo índice, 
colocando o resultado em um terceiro vetor. 
Mostre o vetor resultante. 
*/

//Bblotecas.
#include<stdio.h>
#include<math.h>

//Procedimento para ler os índeces dos vetores.
void lerVetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
}

//Procedimento para multiplicar os índices de dois vetores.
void multiplicaVetor(int v1[], int v2[], int v3[], int n)
{
    for (int i = 0; i < n; i++)
    {
        v3[i] = v1[i] * v2[i];
    }
}

int main(void)
{
    //Declaração de variáveis.
    int v1[10], v2[10], v3[10], i;
    //Inicialização dos vetores.
    for ( i = 0; i < 10; i++)
    {
        v1[i] = 0;
        v2[i] = 0;
        v3[i] = 0;
    }
    //Atribuição dos vetores
    printf("Insira 10 valores para preencher o primeiro vetor.\n");
    lerVetor(v1, 10);
    printf("Insira 10 valores para preencher o segundo vetor.\n");
    lerVetor(v2, 10);
    //Cálculo do terceiro vetor.
    multiplicaVetor(v1, v2, v3, 10);
    //Exibição do terceiro vetor.
    printf("Os índices do vetor resultante são: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", v3[i]);
    }

    return 0;
}