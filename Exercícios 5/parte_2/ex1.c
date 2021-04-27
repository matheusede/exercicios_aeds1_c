/*
PROPOSTOS1.Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e 
retorne a soma dos núme-ros inteiros existentes entre o número 1 e N (inclusive).
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

void calculaSoma(int n)
{
    int soma;

    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }
    
    printf("%d", soma);
}

int main(void)
{
    int n;

    printf("insira um número n para calcular a soma de todos números entre 1 e ele.\n");
    scanf("%d", &n);

    calculaSoma(n);

    return 0;
}