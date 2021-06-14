/*
EX3
Determinar a posição da primeira ocorrência de uma letraem 
uma string(a frase deverá ser digitada pelo usuário). 
Determinar também a posição da última ocorrênciada letra. 
Determinar ainda todas as posições de ocorrência da letra
*/

//Bibliotecas
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Declaração de variáveis.
    char frase[101], letra;
    int tamanho, primeiraPosicao = 0, posicao = 2;
    
    //Input de dados.
    printf("Insira uma frase para ser criptografada, com um máximo de 100 carcaters.\n");
    fgets(frase, sizeof(frase), stdin);

    printf("Insira a letra que será procurada.\n");
    scanf(" %c", &letra);

    tamanho = strlen(frase);

    for (int i = 0; i < tamanho; i++)
    {
        if (frase[i] == letra && primeiraPosicao == 0)
        {
            printf("Primeria posição = %d.\n", i);
            primeiraPosicao = 1;
        }
        else if(frase[i] == letra)
        {
            printf("%d° posição = %d.\n", posicao, i);
            posicao ++;
        }
    }
    
    return 0;
}