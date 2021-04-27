//Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. Finalize digitando idade igual a zero.

//Bibliotecas.
#include <math.h>
#include <stdio.h>

int main (void)
{
    //Declaração de variáveis.
    int soma_idade = 0, idade = 1, inputs = 0;

    //Input de dados.
    while (idade != 0)
    {
        printf("Finalize o programa digitando 0.\n");
        printf("Digite a idade desejada:\n");
        scanf("%i", &idade);

        soma_idade += idade;
        inputs ++;
    }
    printf("A média das idades é igual a %i", soma_idade / inputs);
    
    return 0;
}