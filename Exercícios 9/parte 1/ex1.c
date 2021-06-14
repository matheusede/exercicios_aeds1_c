/*
Ex1
Faça um programa para criptografar uma frase dada pelo usuário. 
Na criptografia, a frase deverá ser invertidae as consoantes deverão 
ser trocadas por #.
Exemplo:Frase: EU ESTOU NA ESCOLASaída: A#O##E A# UO##E UE
*/

//Bibliotecas
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void)
{
    //Declaração de variáveis.
    char frase[101], fraseInversa[101];
    int teste, tamanho;
    
    //Input de dados.
    printf("Insira uma frase para ser criptografada, com um máximo de 100 carcaters.\n");
    fgets(frase, sizeof(frase), stdin);

    tamanho = strlen(frase);
    int j = tamanho - 1;

    //Troca de ordem
    for (int i = 0; i < tamanho; i++)
    {
        fraseInversa[j] = frase [i];
        j--;
    }
    
    for (int i=0 ; i< tamanho; i++)
    {    
        if (fraseInversa[i]!='a' && fraseInversa[i] !='A'
            && fraseInversa[i]!='e' && fraseInversa[i] !='E'
            && fraseInversa[i]!='i' && fraseInversa[i] !='I'
            && fraseInversa[i]!='o' && fraseInversa[i] !='O'
            && fraseInversa[i]!='u' && fraseInversa[i] !='U')
        {
            fraseInversa[i] = '#';
        }
    }
    
    printf("Frase criptografada: %s.\n", fraseInversa);
    
    return 0;
}