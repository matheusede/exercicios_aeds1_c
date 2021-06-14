/*
EX21
Faça um programa que receba uma frase e realize a criptografia dela, 
trocando a primeira e a última palavra de lugar. Exemplo:Frase: 
ESTRELAS E LUA ESTÃO NO CÉUSaída: CÉU E LUA ESTÃO NO ESTRELAS
*/

//Bibliotecas
#include <string.h>
#include <stdio.h>

int main(void)
{
    //Declaração de variáveis.
    char frase[201], palavra1[30], palavra2[30], fraseNova[201];
    int tamanho, teste = 0, teste2 = 0, posicao1, posicao2, contador = 0;

    //Input de dados.
    printf("Insira uma frase, com um máximo de 200 carcaters.\n");
    fgets(frase, sizeof(frase), stdin);

    tamanho = strlen(frase);

    //Inversão
    for (int i = 0; teste != 1; i++)
    {
        if (frase [i] == ' ')
        {
            teste = 1;
            posicao1 = i;
        }
    }

    for (int i = tamanho - 1; teste2 != 1; i--)
    {
        if (frase [i] == ' ')
        {
            teste2 = 1;
            posicao2 = i;
        }
    }
    
    for (int i = 0; i < posicao1 ; i++)
    {
        palavra1[i] = frase[i];
    }
    
    for (int i = posicao2; i < tamanho; i++)
    {
        palavra2[i] = frase[i];
    }
    
    for (int i = 0; palavra2[i] != '\0'; i++)
    {
        fraseNova[i] = frase[i];
        contador ++;
    }
    

    for (int i = contador; i <= posicao2; i++)
    {
        fraseNova[i] = frase[i];
    }

    strcat(fraseNova, palavra1);
    
    printf("%s", fraseNova);

    return 0;
}