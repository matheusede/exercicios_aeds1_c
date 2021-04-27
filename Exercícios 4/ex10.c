//10. Faça um algoritmo que imprima a tabuada do 8 utilizando uma estrutura de repetição.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("8 X %i = %i\n", i, i * 8);
    }
    return 0;
}