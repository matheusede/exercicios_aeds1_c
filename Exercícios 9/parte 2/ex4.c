/*
Ex4.c
Verificar se uma palavra digitada pelousuário é um palíndromo.
*/

//Bibliotecas
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Declaração de variáveis.
    char frase1[101], frase2[101], frase1Inversa[101];
    int teste, tamanho1, tamanho2;
    
    //Input de dados.
    printf("Insira uma frase para ser criptografada, com um máximo de 100 carcaters.\n");
    fgets(frase1, sizeof(frase1), stdin);

    printf("Insira uma frase para ser criptografada, com um máximo de 100 carcaters.\n");
    fgets(frase2, sizeof(frase2), stdin);

    tamanho1 = strlen(frase1);
    tamanho2 = strlen(frase2);
    
    //Inversão
    int j = tamanho1;

    for (int i = 0; i < tamanho1; i++)
    {
        frase1Inversa[j] = frase1 [i];
        j--;
    }
    //output 
    if(strcmp(frase1Inversa, frase2) == 0)
    {
        printf("É políndromo.\n");
    }
    else
    printf("Não é políndromo.\n");

    return 0;
}