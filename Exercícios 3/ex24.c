//Faça um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o menor valor do conjunto. Considere que:
//■ para encerrar a entrada de dados, deve ser digitado o valor zero; 
//■ para valores negativos, deve ser enviada uma mensagem; 
//■ os valores negativos ou iguais a zero não entrarão nos cálculos.

//Bibliotecas.
#include <stdio.h>
#include <math.h>

int main (void)
{
    //input de dados.
    int numero, menor_numero = numero , maior_numero;

    while (numero != 0)
    {
        printf("Insira o número positivo desejado (digite 0 para encerrar a contagem).\n");
        scanf("%i", &numero);

        if (numero < 0)
        {
            printf("Números negativos não são permitidos.\n");
            return 0;
        }
        else if (numero > 0)
        {
            if (numero > 0 && numero <= menor_numero)
            {
                menor_numero = numero;
            }
            if (numero >= maior_numero)
            {
                maior_numero = numero;
            }
        }
        
    }

    printf("O menor número inserido foi %i, equanto maior foi %i.", menor_numero, maior_numero);
    
    return 0;
}