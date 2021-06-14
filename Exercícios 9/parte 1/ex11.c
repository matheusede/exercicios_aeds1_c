/*
EX11
Faça um programa que receba uma frase e 
mostre quantas vezes cada palavra aparece na frase digitada.
*/

//Bibliotecas
#include<stdio.h>
#include<string.h>

//Função para calcular a ocorrência de uma palavra
int calculaVezesPalavra(char* frase, char* palavra, int tamanho1, int tamanho2)
{
    int contador, auxiliar,teste;

    for(int i = 0; i < tamanho1; i++)
    {
        auxiliar = i;

        for(int j = 0; j < tamanho2; j++)
        {
            if(frase[i] == palavra[j])
            i++;
        }

        teste = i - auxiliar;

        if(teste == tamanho2)
        contador++;
            
        i = auxiliar;
    }

    return contador;
}

int main(void)
{
    //Declaração de variáveis
    char frase[201], palavra[20];
    int total, tamanhoFrase, tamanhoPalavra;

    //Input do usuário.
    printf("Insira uma frase, com um máximo de 200 carcaters.\n");//Frase
    fgets(frase, sizeof(frase), stdin);

    printf("Insira uma palavra, com um máximo de 20 carcaters.\n");//Palavra
    fgets(frase, sizeof(frase), stdin);

    //Cálculo do tamanho da frase e da palavra
    tamanhoFrase = strlen(frase);

    tamanhoPalavra = strlen(palavra);

    //Contagem
    total = calculaVezesPalavra(frase, palavra, tamanhoFrase, tamanhoPalavra);

    printf("A palavra se repetiu %d vez(es) na frase.\n", total);

    return 0;
}