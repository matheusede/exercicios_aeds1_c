/*
Ex 15 P 299
Elabore  uma  sub-rotina  que  receba  um  vetor  X  de  15  números  
inteiros  como  parâmetro  e  retorne  a quantidade de valores pares em X.
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

//Procedimento para ler os índeces dos vetores.
int lerVetor(int v[], int n)
{
    int quantidadePares = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0)
        {
            quantidadePares ++;
        }
    }
    return quantidadePares;
}

int main(void)
{
    //Declaração de variáveis.
    int v[15], totalDePares;

    //Leitura dos inputs e números pares
    printf("Insira 15 números para preencher o vetor.\n");
    totalDePares = lerVetor(v, 15);

    //Output de dados
    printf("Total de números pares = %d.\n", totalDePares);
    
    return 0;
}