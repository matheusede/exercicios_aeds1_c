// //Exercício 5; Exercícios Propostos, página 147.
// Faça um programa que mostre as tabuadas dos números de 1 a 10. 

//Bibliotecas.
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Declaração de variáveis.
    int multiplicacao;

    //cálculo.
    for (int x = 1; x <= 10; x++)
    {
        for (int y = 0; y <= 10; y++)
        {
            multiplicacao = x * y;

         printf("%i X %i = %i\n", x, y , multiplicacao);
        }
        
    }
    return 0;
}