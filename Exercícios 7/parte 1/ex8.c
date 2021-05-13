/*
EX 9
*/

//Bibliotecas
#include<stdio.h>
#include<math.h>

//Funçaõ
int calculaSequencia(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else if (n % 2 != 0)
    {
        return (2 * calculaSequencia(n-1) + 3 * calculaSequencia(n - 2));
    }
    
    else
    {
        return 0;
    }
}

int main(void)
{
    //Declaração de vaeriáveis
    int n, soma;

    //Leitura dos inputs
    printf("Insira o número total de elementos na sequência.\n");
    scanf("%d", &n);

    //Cálculo
    soma = calculaSequencia(n);

    //Output
    printf("A soma dos elementos da sequeência é igual a %d.\n", soma);

    return 0;
}