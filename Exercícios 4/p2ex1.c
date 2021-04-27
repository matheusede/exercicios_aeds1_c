//1. Faça um algoritmo que receba um inteiro positivo e retorne sua representação no formato binário.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    int numero, j, i;
    
    while (numero > 0)
    {
        printf("Digite um número inteiro positivo para transformá-lo em binário.\n");
        scanf("%i", &numero);

        int flag = 0;

        for ( i = 31; i >= 0; i--)
        {
            j = numero >> i;

            if (j & 1)
            {
                printf("1 ");
                flag = 1;
            }
            else if (flag)
            {
                printf("0 ");
            }
            
        }
        

    }
    
    return 0;
}