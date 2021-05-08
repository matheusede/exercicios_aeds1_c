/*
ex23 p193
Faça um programa que leia dois vetores (A e B) com cinco posições para números inteiros. 
O programadeve, então, subtrair o primeiro elemento de A do último de B,
 acumulando o valor, subtrair o segundoelemento de A do penúltimo de B, 
 acumulando o valor e assim por diante. 
Ao final, mostre o resultado de todas as subtrações realizadas
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
    int v1[5], v2[5], i, subtracao = 0;

    //Inicialização dos vetores.
    for ( i = 0; i < 5; i++)
    {
        v1[i] = 0;
        v2[i] = 0;
    }

    //Atribuição dos vetores.
    printf("Insira 5 valores inteiros para preencher o primeiro vetor.\n");
    lerVetor(v1, 5);
    printf("Insira 5 valores inteiros para preencher o segundo vetor.\n");
    lerVetor(v2, 5);

    //Cálculo subtração
    for ( i = 0; i < 5; i++)
    {
        subtracao +=  v1[i] - v2[4-i];
    }
    
    printf("O resultado da soma de todas subtrações é %d.", subtracao);
    return 0;
}