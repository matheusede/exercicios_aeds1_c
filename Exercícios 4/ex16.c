//16. Escreva outra versão do algoritmo para resolver o problema anterior utilizando a estrutura com teste de saída no início da repetição (ENQUANTO).

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis
    int positivo = 0, negativo = 0, numero;

    // inicío loop.
    
    for (int i = 0; numero != 0; i++)
    {
        //input de dados.
        printf("Insira um número inteiro qualquer para que o programa conte quantos são negativos e positivos. (0 termina o programa)\n");
        scanf(" %i", &numero);

        if (numero > 0)
        {
            positivo++;
        }
        else if (numero < 0)
        {
            negativo ++;
        }
    }
    
    printf("Dentre os números inseridos, %i eram positivos, enquanto %i eram negativos.", positivo, negativo);
    return 0;
}