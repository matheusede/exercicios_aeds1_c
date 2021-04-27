/*Elabore uma sub-rotina que receba como parâmetro um valor N (inteiro e maior ou igual a 1) 
e determi-ne o valor da sequência S, descrita a seguir:S = 1  +  1/2  +  1/3... 
A quantidade de parcelas que compõe S é igual a N.
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

void calculaSequencia(int n)
{
    float soma = 0;
    int divisores = 1;

    for (int i = 1; i <= n; i++)
    {
        soma += (n / divisores);
        
        divisores ++;
    }

    printf("Soma = %.2f", soma);
}

int main(void)
{
    int n;

    printf("Insira um número inteiro positivo qualquer.\n");
    scanf("%d", &n);

    calculaSequencia(n);

    return 0;
}