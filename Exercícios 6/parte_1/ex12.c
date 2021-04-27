/*Crie uma sub-rotina que receba como parâmetro dois valores X e Z, calcule e 
retorne Xz sem utilizar funções ou operadores de potência prontos.*/

#include<stdio.h>
#include<math.h>

int calcula_potencia(int x, int z)
{
    int potencia = 1;

    for (int i = 1; i <= z; i++)
    {
        potencia *= x;
    }
    
    return potencia;
}

int main(void)
{
    int x, z, potencia = 0;

    printf("Insira dois números, sendo que o primeiro será elevado pelo segundo. \n");
    scanf("%d %d", &x, &z);

   potencia = calcula_potencia(x, z);

    printf("O resultado é igual à %d", potencia);

    return 0;
} 