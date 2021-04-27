//7. Faça um algoritmo que receba diversos pares de números A e B entrados pelo usuário, 
//e determine a soma dos cubos de todos os números pares inteiros compreendidos no intervalo entre B e A. 
//Retorne o intervalo pesquisado e o valor da soma calculada. a entrada de dados deverá ser interrompida quando A e B forem iguais a zero.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    int a = 1, b = 1, inicio, fim, soma;
    
    for (int i = 0; a != 0 && b != 0; i++)
    {
        printf("Insira um par de números (para finalizar o programa digite 0 para ambos)\n");
        scanf("%i %i", &a, &b); //Input de dados.
        
        if(a == 0 && b == 0)
        {
            return 0;
        }

        if (a < b)
        {
            inicio = a;
            fim = b;
        }
        
        else if (a > b)
        {
            inicio = b;
            fim = a;
        }
        

        for (int i = inicio; i <= fim; i++)
        {
            printf(" %i,", i);

            soma += pow(i, 3);
            
        }
        
        printf("\nA soma do cubo dos números do intervalo é igual a %i.\n", soma);
    }
    
    return 0;
}