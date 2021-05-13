/*
ex 4
Calculara soma dos dígitos de um número(ex.: 75 = 7 + 5 = 12)
*/

//Bibliotecas. 
#include <stdio.h>
#include <math.h>

int calculaSoma(int n)
{
    if(n < 1)
    {
        return 0;
    }
    else
    {
        return(n % 10 + calculaSoma(n / 10));
    }
}

int main(void)
{
    //Declaração de variáveis 
    int n, soma;

    //Inpput de usuário 
    printf("Insira um número para calcular a soma dos seus digítos.\n");
    scanf("%d", &n);

    //Cálculo
    soma = calculaSoma(n);

    //Output
    printf("A soma dos dois digítos é igual a %d\n", soma);

    return 0;
}