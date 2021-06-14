/*
7-Faça uma função recursiva para calcular (e imprimir) 
os elementos da seguinte sequência: 1+1/2+1/3+1/4+⋯+1𝑁
*/

//Bibliotecas.
#include <stdio.h>
#include <math.h>

//Procedimento para imprimir a sequência.
float imprimeSequencia(int n)
{
    if (n > 1)
    {
        printf("1/%d + ", n);
        return(1/n + imprimeSequencia(n - 1));

    }

    else
    {
        return 0;
    }
}

int main(void)
{
    //Declaração de variáveis.
    int n, soma;

    //Input do usuário.
    printf("Insira o número total de elementos na sequência.\n");
    scanf("%d", &n);

    //Cálculo.
    soma = imprimeSequencia(n);

    //Output d dados.
    printf("= %d", soma);

    return 0;
}

//que raivaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa