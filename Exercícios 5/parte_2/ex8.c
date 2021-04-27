//8.Faça uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial. 

//Bibliotecas.
#include<stdio.h>
#include<math.h>

void calculaFatorial(int n)
{
    int fatorial = 1;

    for (int i = n; i >= 1; i--)
    {
        fatorial *= i;
    }

    printf("%d", fatorial);
}

int main(void)
{
   
    int n;

    printf("Insira um número inteiro positivo.\n");
    scanf("%d", &n);

    calculaFatorial(n);

    return 0;
}