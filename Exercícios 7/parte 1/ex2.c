/*
ex2 
Calcular o fatorial de x
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

//Funçâo para calcular fatorial.
int calculaFaotorial(int x)
{
    if (x  > 0)
    {
        return (x * calculaFaotorial(x - 1));
    }
    else
    {
        return 1;
    }
}

int main(void)
{
    //Declaração de variáveis.
    int x, fatorial;

    //Leitura dos inoputs.
    printf("Insira um número para calcular o seu fatorial.\n");
    scanf("%d", &x);

    //Cálculo 
    fatorial = calculaFaotorial(x);

    //Output de dados.
    printf("O fatorial de %d é igual %d.\n", x, fatorial);

    return 0;
}