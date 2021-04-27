//// //Exercício 11; Exercícios Propostos, página 147.
//Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os números que foram digitados.

#include <math.h>
#include <stdio.h>

int main(void)
{
    //input de dados.
    int numero, primo = 0, teste = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Digite o %i° número:\n", i);
        scanf("%i", &numero);

        for (int x = 2; x <= numero / 2 ; x++)
        {
            if (numero % x == 0)
            {
                teste = 1;
            }
            
        }
        
        if (teste == 0)
        {
            primo++;
        }
        
        
    }
    printf("Dentre os nnúmeros selecionados, %i eram primos.", primo);
}
