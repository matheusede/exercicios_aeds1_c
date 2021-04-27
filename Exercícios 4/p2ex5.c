//5 Faça um algoritmo que receba um inteiro positivo n e prove a igualdade abaixo:

//Biliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declarações de variáveis.
    int n, soma = 0, fracao;
    
    printf("Insira um número inteiro qualquer.\n"); //Input do n.
    scanf("%i", &n);

    for ( int i = 1; i <= n; i++)
    {
        soma += (i * i);
    }

    fracao = (n * (n + 1) * (2 * n + 1) / 6);
    
    printf(" %i = %i", soma, fracao);
    return 0;
}