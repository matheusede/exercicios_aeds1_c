//29. Faça um  algoritmo para ler dois valores inteiros e imprimir o resultado da divisão do primeiro pelosegundo. 
//Se o segundo valor informado for ZERO, deve ser impressa uma mensagem de VALOR INVÂLIDO e deverá serlido um novo valor. 
//Ao final do programa deve ser impressa a seguinte mensagem: VOCE DESEJA  OUTRO CÁLCULO  (S/N)?.  
//Se  a  resposta  for  S  o  programa  deverá  retornar  ao  começo,  caso contrário deverá encerrara sua execução imprimindo quantos cálculos foram feitos.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    int n1 = 1, n2 = 1;
    char opcao;

    //Inicío do loop.
    while (opcao != 'n' || opcao != 'N')
    {
        printf("Insira dois números para serem dividios, sendo o primeiro o numerador e o segundo o denominador.\n");
        scanf("%i %i", &n1, &n2);

        if (n2 == 0)
        {
            printf("Valor inválido");
        }
        else if (n2 != 0)
        {
            printf("O resultado é %i.\n", n1 / n2);
        }
        
        printf("Você desja realizar outro cálculo?\n");
        scanf(" %c", &opcao);
        
        if(opcao == 'n' || opcao == 'N')
        {
            break;
        }
    }   
    return 0;
}