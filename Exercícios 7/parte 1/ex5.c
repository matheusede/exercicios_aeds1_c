/*
ex5
Calcule a soma dos números de 1 a n(ex.: 3= 1 + 2 + 3 = 6)
*/

//Bibliotecas
#include <stdio.h>
#include <math.h>

int calculaAteN(int n)
{
    if (n == 1)
    {
        return 1;
    }

    else
    {
        return(n + calculaAteN(n-1));
    }
    
}

int main(void)
{
    //Declaração de variáveis.
    int n, soma;
    
    //Input do usuário.
    printf("Insira um número para calcular a soma dos seus digítos.\n");
    scanf("%d", &n);

    //Calculo
    soma = calculaAteN(n);

    //Output de dados.
    printf("A soma de todos os número até %d é %d.\n", n, soma);

    return 0;
}