//6. Faça um algoritmo para ler um número inteiro e escrevê-lo na tela 10 vezes utilizando uma repetição.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    int n; //Declaração de variáveis.

    printf("Escreva um número n que será repetido n vezes.\n");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)//Inicío loop.
    {
        printf("%i\n", n);
    }
    
    return 0;
}