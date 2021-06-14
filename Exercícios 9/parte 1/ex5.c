/*
EX5
Faça um programa que receba duas cadeias de caracteres e 
verifique se a primeira cadeia digitada é permuta-ção da segunda cadeia, 
ou seja, se todos os caracteres da primeira cadeia 
estão presentes na segunda cadeia,mesmo que em posições diferentes.
*/

//Bibliotecas
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//Procedimento para ordernar em ordem alfábetica.
void ordemAlfabeitca(char* frase, int tamanho)
{
    int i, j;
    char auxilio;

    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = i + 1; j < tamanho; j++)
        {
            if (frase[i] > frase[j])
            {
                auxilio = frase[i];
                frase[i] = frase[j];
                frase[j] = auxilio;
            }
        }
    }  
}


int main(void)
{
    //Declaração de variáveis.
    char frase1[200], frase2[200];
    int tamanho1, tamanho2;

    //Input do usuário.
    printf("Insira uma frase, com um máximo de 200 carcaters.\n");
    fgets(frase1, sizeof(frase1), stdin);

    printf("Insira uma frase, com um máximo de 200 carcaters.\n");
    fgets(frase2, sizeof(frase2), stdin);

    //Código para medir o tamanho de cada string
    tamanho1 = strlen(frase1);
    tamanho2 = strlen(frase2);

    //Reorganizar strings
    ordemAlfabeitca(frase1, tamanho1);
    ordemAlfabeitca(frase2, tamanho2);

    //Comparação das strings.
    if (strcmp(frase1, frase2) == 0)
    printf("As frases são permutações umas das outras.\n");

    else
    printf("As duas frases não são permutações umas das outras.\n");
    
    return 0;
}