/*
EX3
Faça um programa que receba uma frase e gere uma nova, 
retirando os espaços excedentes no início e no fim da frase e entre suas 
palavras.
*/

//Bibliotecas 
#include<string.h>
#include<stdio.h>

int main(void)
{
  //Declaração de variáveis.
  char frase[201];
  int tamanho;

  //Input de dados.
  printf("Insira uma frase, com um máximo de 200 carcaters.\n");
  fgets(frase, sizeof(frase), stdin);

  tamanho = strlen(frase);

  for (int i = 0; i < tamanho; i++)
  {
      if (frase[i] != ' ')
      {
          printf("%c", frase[i]);
      }
      
  }
  
  return 0;
}