/*
Ex23
A busca por subcadeias dentro de grandes cadeias de caracteres é um problema 
clássico na computação, especificamente  em  bancos  de  dados.  
Faça  um  programa  que  receba  uma  cadeia  de  caracteres  e  umasubcadeia, 
determine e mostre quantas vezes a subcadeia aparece dentro da cadeia.
*/

//Bibliotecas
#include <stdio.h>
#include <string.h>
 
int main()
{
    //Declaração de variáveis.
    int i, j, tamanho1, tamanho2, teste = 0, numeroTotal = 0;
    char frase[100], subfrase[100];
 
    printf("Escreva uma frase de no máximo 100 caracteres.\n");
    fgets(frase, sizeof(frase), stdin);
 
    tamanho1 = strlen(frase);
 
    printf("Escreva uma subfrase de no máximo 100 caracteres.\n");
    fgets(subfrase, sizeof(subfrase), stdin);
 
    tamanho2 = strlen(subfrase);
 
    for (i = 0; i < tamanho1;)
    {
        j = 0;
        teste = 0;

        while ((frase[i] = subfrase[j]))
        {
            teste++;
            i++;
            j++;
        }

        if (teste == tamanho2)
        {
            numeroTotal++;                                   
            teste = 0;
        }

        else
        i++;
    }    
    printf("A subfrase apareceu %d vezes na frase prinicipal.\n", numeroTotal);

    return 0;
}