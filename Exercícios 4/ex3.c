//3. Faça um algoritmo para imprimir os números de 1 a 10 utilizando uma estrutura PARA e um contador.

//Bblotecas.
#include<math.h>
#include<stdio.h>

int main(void)
{
    //Declaração de variáveis.
    int n = 1;

    do
    {
        printf("%i\n", n);

        n++;
    } while (n <= 10);
    
    return 0;
}