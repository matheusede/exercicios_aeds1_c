//Crie uma sub-rotina que receba como parâmetro um valor inteiro e 
//positivo e retorne a soma dos divisores desse valor.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

void calculaSomaDivisores(int n)
{
    int soma = 0;

    for (int divisores = 1; divisores < n; divisores++)
    {
        if (n % divisores == 0)
        {
            soma += divisores;
        }
    }
    
    printf("Soma = %d", soma);
}

int main(void)
{
    int n = 1;

    printf("Insira um número inteiro positivo qualquer.\n");
    scanf("%d", &n);

    calculaSomaDivisores(n);

    return 0;
}