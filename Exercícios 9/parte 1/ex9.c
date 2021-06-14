/*
EX9
Faça um programa que receba uma frase e um caractere e verifique 
em que posição da frase o caractere digi-tado aparece pela primeira vez.
*/

//Bibliotecas
#include<stdio.h>
#include<string.h>

int main(void)
{
    //Declaração de variáveis.
    char frase[201], caractere;
    int tamanho, teste = 0, posicao;

    //Input de dados.
    printf("Insira uma frase, com um máximo de 200 carcaters.\n");
    fgets(frase, sizeof(frase), stdin);

    printf("Insira o caractere que será procurado.\n");
    scanf(" %c", &caractere);

    tamanho = strlen(frase);

    for (int i = 0; i < tamanho; i++)
    {
        if (frase[i] == caractere)
        {
         teste = 1;
         posicao = i;
         break;
        }
        
    }

    if (teste == 1)
    {
        printf("O caractere foi encontrado na %d poisção da frase.\n", posicao);
    }
    
    else
    {
        printf("O carctere não foi encontrado.\n");
    }

    return 0;
}