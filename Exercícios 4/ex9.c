//9. Faça um algoritmo para ler um valor N (validar para aceitar apenas valores positivos) e imprimir os N primeiros números inteiros.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    int n;

    //Input de dados.
    printf("Insira a quantidade de númreos que o programa vai exibir.\n");
    scanf("%i", &n);

    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf(" %i,", i);
        }
        
    }
    return 0;
}