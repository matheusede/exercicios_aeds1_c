/*
Ex 2, p 190.
Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
■os números múltiplos de 2; 
■os números múltiplos de 3; 
■os números múltiplos de 2 e de 3.
*/

//Bibliotecas.
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Declaraçõo de variáveis.
    int numeros[7];

    //Inicialização das variáveis.
    for (int i = 0; i < 7; i++)
    {
        numeros[i] = 0;
    }

    //Atrbuição dos valores do array.
    for (int i = 0; i < 7; i++)
    {
        numeros[i] = i + 1;
    }
    
    printf("Os números múltiplos de dois são ");
    for (int i = 0; i < 7; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            printf(", %d", numeros[i]);
        }
    }
    printf(".\n");
    printf("Os números múltiplos de três são ");
    for (int i = 0; i < 7; i++)
    {
        if (numeros[i] % 3 == 0)
        {
            printf(", %d", numeros[i]);
        }
    }
    printf(".\n");
    printf("Os números múltiplos de dois e três são ");
    for (int i = 0; i < 7; i++)
    {
        if (numeros[i] % 2 == 0 && numeros[i] % 3 == 0)
        {
            printf(", %d", numeros[i]);
        }
    }
    printf(".\n");
    
    return 0;
}