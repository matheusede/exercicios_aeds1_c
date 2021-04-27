// //Exercício 4; Exercícios Propostos, página 147.
// Faça um programa que receba um número, calcule e mostre a tabuada desse número. 

//biblioteca
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Input de dados.
    int numero, multiplicacao;
    printf("Digite um número inteiro qualaquer para calcular suas tabuada: \n");
    scanf("%i", &numero);

    //Cálculo do programa.
    for (int x = 0; x <= 10; x++)
    {
        multiplicacao = numero * x;

        printf("%i x %i = %i", numero, x, multiplicacao); //output de dados.
    }
    
}