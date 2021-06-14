//Programa para decriptografar a string

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

    arquivo = fopen ("arquivo.txt", "r");

    if (! arquivo)
    {
        {
            printf("Erro na arbetura do arquivo.\n");
            exit(0);
        }
    }

    while (!feof(arquivo))
    {
        fscanf (arquivo ,"%s", fraseCripto);
    }

    fclose(arquivo);

    tamanho = strlen(fraseCripto);

    for (int i = 0; i < tamanho; i++)
    {
        frase[i] = fraseCripto[i] - 1;
    }

    frase[tamanho] = '\0';

    arquivo = fopen ("arquivo.txt", "w");

    fprintf(arquivo, "%s", frase);

    fclose(arquivo);
    
    return 0;
}