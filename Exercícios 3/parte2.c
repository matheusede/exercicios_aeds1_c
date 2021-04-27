// Neste laboratório de hoje, dado um número L > 0 entrado pelo usuário, faça um programa que imprima os L primeiros elementos da série de Fibonacci

//Biliotecas.
#include <math.h>
#include <stdio.h>

int main()
{
    //input de dados.
    int l, numero1 = 0, numero2 = 1, numero_n;

    printf("Insira o número de elementos da sequência de Fibonacci que serão mostrados: \n");
    scanf("%i", &l);

    //Cálculo.
    for (int i = 1; i <= l; i++)
    {
        numero_n = numero1 + numero2;
        
        printf("%i, ", numero_n);

        numero1 = numero2;
        numero2 = numero_n;
        
    }
    return 0;
}