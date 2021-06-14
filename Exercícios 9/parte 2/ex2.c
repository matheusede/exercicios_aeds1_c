/*
Ex2
Faça um programa que inverta os caracteres de uma string
*/

//Bibliotecas
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Declaração de variáveis.
    char frase[101], fraseInversa[101];
    int teste, tamanho;
    
    //Input de dados.
    printf("Insira uma frase para ser criptografada, com um máximo de 100 carcaters.\n");
    fgets(frase, sizeof(frase), stdin);

    tamanho = strlen(frase);

    //Inversão
    int j = tamanho -1;

    for (int i = 0; i < tamanho; i++)
    {
        fraseInversa[j] = frase [i];
        j--;
    }

    printf("%s\n", fraseInversa);


    return 0;
}