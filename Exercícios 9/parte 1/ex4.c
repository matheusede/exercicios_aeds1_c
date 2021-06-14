/*
EX4
Faça um programa que receba uma frase, calcule e mostre a quantidade de palavras 
da frase digitada. Antes de contar a quantidade de palavras da frase, 
esta deverá passar pelas seguintes correções:

a)Eliminação de espaços no início da frase. 
b)Eliminação de espaços no fim da frase. ]
c)Eliminação de espaços duplicados entre palavras.
*/

#include<stdio.h>
#include<string.h>
#include <ctype.h>

void deletaEspacoExtra(char* str) 
{
  int i, x;
  for(i = x = 0; str[i]; ++i)

    if(!isspace(str[i]) || (i > 0 && !isspace(str[i-1])))
    str[x++] = str[i];

  str[x] = '\0';
}

int main(void)
{
  //Declaração de variáveis.
  char frase[201];
  int tamanho, testeEspaco = 1;

  //Input de dados.
  printf("Insira uma frase, com um máximo de 200 carcaters.\n");
  fgets(frase, sizeof(frase), stdin);
  
  deletaEspacoExtra(frase);

  tamanho = strlen(frase);

  for (int i = 0; i < tamanho; i++)
  {
    if (frase[i] == ' ')
    {
        testeEspaco ++;
    }
  }
  
  printf("A frase tinha um total de %d palavras.\n", testeEspaco);

  return 0;
}