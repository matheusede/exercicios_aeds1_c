/*5.Faça uma sub-rotina que 
receba um valor inteiro e verifique 
se ele é positivo ou negativo. */

//Bibliotecas.
#include <stdio.h>
#include <math.h>

void verificaPositivoNegativo(int n)
{
    if (n > 0)
    {
        printf("Positivo.\n");
    }
    else
    {
        printf("Negativo.\n");
    }
}

int main(void)
{
    int numero;

    printf("Insira um número inteiro qualquer.\n");
    scanf("%i", &numero);

    verificaPositivoNegativo(numero);

    return 0;
}