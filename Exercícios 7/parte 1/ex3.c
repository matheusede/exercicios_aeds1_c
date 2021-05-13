/*
ex3
Calcula os n primeiros termos da sequuência de Fibonacci.
*/

//Bibliotecas. 
#include <stdio.h>
#include <math.h>

//Função para calcular fibonacci.
int calculaFibonacci(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (calculaFibonacci(n-1) + calculaFibonacci(n-2));
    }
    
}

int main(void)
{
    //Declaração de variáveis.
    int n, fibonacci;

    //Lê input do usuário 
    printf("Insira os números de elementos que serão mostrados.\n");
    scanf("%d", &n);

    //Impressão dos resultados.
    for (int i = 0; i <= n; i++)
    {   
        printf("%d ", calculaFibonacci(i + 1));
    }
    
    return 0;
}