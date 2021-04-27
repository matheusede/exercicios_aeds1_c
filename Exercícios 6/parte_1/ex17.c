//Elabore uma sub-rotina que calcule o máximo divisor comum 
//(MDC) de dois números recebidos como parâmetros. 
#include<stdio.h>
#include<math.h>

int calcula_mdc(int x, int y)
{
    int teste;

    do
    {
        teste = x % y;

        x = y;
        y = teste;
    } while (teste != 0);
    
    return x;
}

int main(void)
{
    int x, y, mdc;

    printf("Insira dois números inteiros para calcularmos o mdc entre eles.\n");
    scanf("%d %d", &x, &y);

    mdc = calcula_mdc(x, y);

    printf("O resultado é igual à %d", mdc);

    return 0;
}