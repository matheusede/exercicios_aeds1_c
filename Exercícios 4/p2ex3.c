// 3 Faça um algoritmo que calcule o seguinte somatório:

//Bibliotecas:
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    int numerador = 1, denominador = 225;
    float soma;

    //cálculo
    for (int i = 1; numerador != 16384; i++)
    {
        soma += numerador / denominador;

        numerador *= 2;

        denominador = denominador - (29 - 2 * i);
    }
    
    printf("%.2f", soma + 16384);
    return 0;
}