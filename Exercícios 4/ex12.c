//12. Ler 10 valores e escrever quantos destes valores são negativos.

//Bibliotecas.
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Declaração de variáveis.
    int n, negativo = 0;

    //Inicío do loop.
    for (int i = 1; i <= 10; i++)
    {
        printf("Digite um número qualquer, incluindo números negativos.\n"); //Input de dados.
        scanf("%i", &n);

        if (n < 0) //Verifica se o número é negativo.
        {
            negativo ++;
        }
        
    }
    
    printf("Dentre os números digitados, %i eram negativos.", negativo);

    return 0;
}