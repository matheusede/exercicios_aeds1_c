/*
ep1 p 192
Faça um programa que preencha um vetor com quinze números, determine e mostre: 
■o maior número e a posição por ele ocupada no vetor; 
■o menor número e a posição por ele ocupada no vetor
*/

//Bibilotecas.
#include<stdio.h>
#include<math.h>

//Procedimento de organização.
int maiorVetor(int v[], int n)
{
    int maiorPosicao;
    for (int i = 0; i < n; i++)
    {
        if (v[0] < v[i])
        {
            v[0] = v[i];
            maiorPosicao = i + 1;
        }
    }
    return maiorPosicao;
}

int menorVetor(int v[], int n)
{
    int menorPosicao;
    for (int i = 0; i < n; i++)
    {
        if (v[0] > v[i])
        {
            v[0] = v[i];
            menorPosicao = i + 1;
        }
    }
    return menorPosicao;
}

int main(void)
{
    //Declaração de variáveis.
    int v[15], i, vetorZeroOriginal, maiorPosicao, menorPosicao;
    //Inciazlização do vetor.
    for (i = 0; i < 15; i++)
    {
        v[i] = 0;
    }
    //Atribuição do vertor.
    printf("Insira 15 valores para preencher o vetor.\n");
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &v[i]);
    }
    vetorZeroOriginal = v[0]; //Salvando o valor original do zero, já que ele vai ser alterado.
    maiorPosicao = maiorVetor(v, 15);
    printf("O maior valor foi %d e sua porsição era a %d.", v[0], maiorPosicao);
    v[0] = vetorZeroOriginal; //Restaurando o valor original do zero.
    menorPosicao = menorVetor(v, 15);
    printf("O menor valor foi %d e sua posição era a %d.", v[0], menorPosicao);
    return 0;
}