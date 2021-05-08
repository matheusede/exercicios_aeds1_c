/*
EX20 P 193
Faça um programa que leia um vetor com dez posições para números inteiros e 
mostre somente os nú-meros positivos
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
    //Declaração de variáveis.
    int v[10], i;

    //Inicialização do vetor.
    for (i = 0; i < 10; i++)
    {
        v[i] = 0;
    }

    //Atribuiçaõ dos índices.
    printf("Insira 10 valores inteiros para preencher o vetor.\n");
    lerVetor(v, 10);

    //Output de dados.
    printf("Os número positivos dentro do vetor são: ");
    //Verficação de pares.
    for ( i = 0; i < 10; i++)
    {
        if (v[i] > 0)
        {
            printf("%d ", v[i]);
        }
    }
    
    return 0;
}