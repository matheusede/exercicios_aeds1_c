/*
ex 25 p 193
Faça um programa que leia um vetor com quinze posições para números inteiros.
 Depois da leitura, di-vida todos os seus elementos pelo maior valor do vetor. 
Mostre o vetor após os cálculos
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

//Procedimento para ler os índeces dos vetores.
void lerVetor(float v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &v[i]);
    }
}
int maiorVetor(float v[], int n)
{
    int maiorNumero;
    for (int i = 0; i < n; i++)
    {
        if (v[0] < v[i])
        {
            v[0] = v[i];
        }
    }
    maiorNumero = v[0];
    return maiorNumero;
}

int main(void)
{
    //Declaração de variáveis.
    int i, vetor0Original, maiorNumero;
    float v1[15];

    //Inicizalização do vetores.
    for ( i = 0; i < 15; i++)
    {
        v1[i] = 0;
    }
    
    //Leitura dos inputs.
    printf("Insira 15 valores inteiros para preencher o vetor.\n");
    lerVetor(v1, 15);

    //Salvando o vetor 0 original
    vetor0Original = v1[0];

    //Definindo maior número.
    maiorNumero = maiorVetor(v1, 15);
    v1[0] = vetor0Original;

    //Calculo final
    for ( i = 0; i < 15; i++)
    {
        v1[i] = v1[i] / maiorNumero;
    }
    
    //Output de dados.
    for ( i = 0; i < 15; i++)
    {
        printf("%.2f ", v1[i]);
    }
    
    return 0;
}