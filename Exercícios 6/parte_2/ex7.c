/*
Calcular e retornar o máximo divisor comum entre dois números informados pelo usuário a partir
do algoritmo de Euclides.
*/

#include<math.h>
#include<stdio.h>

int calculaMdc(int a, int b)
{
    int resto;
    while (b != 0)
    {
        resto = a % b;

        a = b;

        b = resto;
    }

    return a;
}
int main(void)
{
    int a, b, mdc;

    printf("Insira dois númreos inteiros para calcular o mdc entre ambos.\n");
    scanf("%d %d", &a, &b);

    mdc = calculaMdc(a, b);

    printf("A mdc dos dois números é %d.\n", mdc);

    return 0;
}