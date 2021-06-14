/*
Faça um programa que receba uma frase e faça a criptografia dela, substituindo as 
vogais pelos seguintes números: a = 1, e = 2, i = 3, o = 4 e u = 5
*/

//Bibliotecas
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Declaração de variáveis.
    char frase[101];
    int teste, tamanho;
    
    //Input de dados.
    printf("Insira uma frase para ser criptografada, com um máximo de 100 carcaters.\n");
    fgets(frase, sizeof(frase), stdin);

    tamanho = strlen(frase);
    
    for (int i=0 ; i< tamanho; i++)
    {    
        if (frase[i]=='a' || frase[i] =='A')
        {
            frase[i] = '1';
        }
        else if (frase[i]=='e' || frase[i] =='E')
        {
            frase[i] = '2';
        }
        else if (frase[i]=='i' || frase[i] =='I')
        {
            frase[i] = '3';
        }
        else if (frase[i]=='o' || frase[i] =='O')
        {
            frase[i] = '4';
        }
        else if (frase[i]=='u' || frase[i] =='U')
        {
            frase[i] = '5';
        }
    }
    
    printf("Frase criptografada: %s.\n", frase);
    
    return 0;
}