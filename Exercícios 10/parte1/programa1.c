//Programa para criptografar a string

//Bicliotecas
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(void)
{
    //Declaração de variáveis.
    FILE *arquivo;
    char frase[101], fraseCripto[101];
    int tamanho;

    arquivo = fopen ("arquivo.txt", "w");

    if (! arquivo)
    {
        printf("Erro na arbetura do arquivo.\n");
        exit(0);
    }

    //Leitura da frase original
    printf("Escreva uma frase de até 100 caracteres.\n");
    fgets(frase, sizeof(frase), stdin);
    
    tamanho = strlen(frase);
    
    for (int i = 0; i < tamanho; i++)
    {
        fraseCripto[i] = frase[i] + 1;
    }

    fraseCripto[tamanho] = '\0';
    
    //Grava string criptografada no arquivo
    fprintf(arquivo, "%s", fraseCripto);

    fclose(arquivo);

return 0;
}