//5. Faça um algoritmo para ler um valor N (validar para aceitar apenas valores positivos) e imprimir a palavra PROGRAMACAO N vezes.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    int n;//Declaração de variáveis.

    printf("Insira o número de vezes que a palavra ""programação"" irá ser escrita.\n");
    scanf("%i", &n);

    if (n > 0)
    {
        for (int i = 1; i <= n; i++) //repetição.
        {
            printf("Programação.\n");
        }
    }
    
    else{printf("Número inválido.");}
    
    return 0;
}