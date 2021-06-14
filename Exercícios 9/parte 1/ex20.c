/*
EX20
Faça um programa que receba uma frase e faça a criptografia dela, 
utilizando a representação ASCII de cada caractere mais um espaço, 
e depois proceda à sua descriptografia.
*/

//Bibliotecas 
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Declaração de variáveis.
    char frase[201];
    int tamanho, vetor[201];

    //Input de dados.
    printf("Insira uma frase, com um máximo de 200 carcaters.\n");
    fgets(frase, sizeof(frase), stdin);

    tamanho = strlen(frase);

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", frase[i]);
        vetor[i] = frase[i];
    }

    printf("\n");

    for (int i = 0; i < tamanho; i++)
    {
        frase[i] = vetor[i];
        printf("%c", vetor[i]);
    }
    
    return 0;
}