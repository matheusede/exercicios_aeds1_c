/*
ex 21 p193
Faça um programa que leia um vetor com dez posições para números inteiros. 
Crie um segundo vetor, substituindo os valores nulos por 1. Mostre os dois vetores.
*/

//Bibliotecas.
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

int main(void)
{
    //Declaração de varáveis.
    int v1[10], v2[10], i;

    //Inicialização dos vetores.
    for ( i = 0; i < 10; i++)
    {
        v1[i]  = 0;
        v2[i] = 0;
    }
    //Atribuição do vetor.
    printf("Insira 10 valores inteiros para preencher o vetor.\n");
    lerVetor(v1, 10);

    //Output de dados.
    printf("O vetor resultante, sem elementos neutros, é: ");
    //Verificação valores nulos.
    for ( i = 0; i < 10; i++)
    {
        if (v1[i] == 0)
        {
            v1[i] == 1;
        }

        v2[i] = v1[i];
    }
    
    return 0;
}