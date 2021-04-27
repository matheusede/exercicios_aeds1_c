//4. Faça um algoritmo que calcule e escreva a soma dos 20 primeiros números da série:

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    float soma, numerador = 100, denominador, n = 1, x;
    
    //Cálculos.
    for (int i = 1; i <= 20; i++)
    {
        x = n;
        
        for(denominador = 1; x > 1; x -= 1)
        {      
            denominador *= x;
        }
    
        soma += (numerador / denominador);
        
        
        numerador --;
        n ++;
    }
    
    printf("A soma é gual a %.2f", soma);

    return 0;
}