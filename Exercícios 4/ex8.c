//8. Faça um algoritmo que imprima os números ímpares existentes de entre 1(inclusive) e 9 (inclusive).

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("%i\n", i);
        }
    }
    return 0;
}
