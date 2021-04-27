/*
Calcular e retornar o máximo divisor comum entre dois números informados pelo usuário a partir
do algoritmo de Euclides.
*/

#include<math.h>
#include<stdio.h>

void calculaMdc(int a, int b, int *mdc)
{
    int resto;
    while (b != 0)
    {
        resto = a % b;

        a = b;

        b = resto;
    }
    *mdc = a;
    
}
int main(void)
{
    int a, b, mdc;

    printf("Insira dois númreos inteiros para calcular o mdc entre ambos.\n");
    scanf("%d %d", &a, &b);

    calculaMdc(a, b, &mdc);

    printf("A mdc dos dois números é %d.\n", mdc);

    return 0;
}