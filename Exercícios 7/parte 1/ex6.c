/*
Ex 6
Calcular o máximo divisor comum (MDC)de dois números
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

//Função para calcular o mdc
 int calculaMdc(int n1, int n2)
{
    if (n2 == 0)
    {
        return n1;
    }
    
    else
    {
        return (calculaMdc(n2, n1 % n2));
    }
    
}

int main(void)
{
    //Declaração de variáveis.
    int n1, n2, mdc;

    //Input de dados.
    printf("Insira dois números para calcular o mdc entre eles.\n");
    scanf("%d %d", &n1, &n2);

    //cálculo.
    mdc = calculaMdc(n1, n2);

    //Output de dados.
    printf("O mdc de %d e %d é %d.\n", n1, n2, mdc);

    return 0;
}