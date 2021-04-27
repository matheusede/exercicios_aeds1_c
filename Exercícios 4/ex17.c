//17.Faça  um  algoritmo  para  ler  uma  quantidade  indeterminada  de  valores  inteiros.  
//Para  cada  valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR. 
//O algoritmo será encerradoimediatamente após a leitura de um valor NULO (zero) ou NEGATIVO

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    int numero = 1;

    //Inicío loop.
    while (numero > 0)
    {
        printf("Digite um número para descobrir se ele é par ou ímpar.\n");
        scanf("%i", &numero);

        if (numero % 2 == 0)
        {
            printf("O número é %i é par.\n", numero);
        }
        
        else if (numero % 2 != 0)
        {
            printf("O número é %i é ímpar.\n", numero);
        }
        
    }
    return 0;
}