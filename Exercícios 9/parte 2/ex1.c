/*
EX1
Faça  um  programa  que  receba  uma  frase,  
calcule  e  mostre  a  quantidade  de  palavras  
da  frase digitada.
*/

//Bibliotecas
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Declaração de variáveis.
    char frase[101];
    int teste, tamanho, contador;
    
    //Input de dados.
    printf("Insira uma frase, com um máximo de 100 carcaters\n");
    fgets(frase, sizeof(frase), stdin);

    tamanho = strlen(frase);

    //Cálculo de palavras
    for (int i = 0; i < tamanho; i++)
    {
        if (frase[i] == ' ')
        {
            contador ++;
        }
    }
    
    printf("A frase tem %d palavras.\n", contador + 1);

    return 0;
}