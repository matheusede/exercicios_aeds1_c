//15. Faça um algoritmo para repetir a leitura de um número enquanto o valor fornecido for diferente de 0.  Para cada  número  fornecido,  imprimir  se  ele  é  NEGATIVO  ou  POSITIVO.  
//Quando  o  número  0  forfornecido   a repetição   deve   ser   encerrada   sem   imprimir   mensagem   alguma.   Use   a   estrutura FAÇA/ENQUANTO

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis
    int positivo = 0, negativo = 0, numero;

    // inicío loop.
    do
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
        
    } while (numero != 0);
  
    printf("Dentre os números inseridos, %i eram positivos, enquanto %i eram negativos.", positivo, negativo);
    return 0;
}