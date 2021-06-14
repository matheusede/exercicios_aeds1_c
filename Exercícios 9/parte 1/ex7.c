/*
EX7
Faça um programa que receba uma frase e 
mostre quantas letras diferentes ela contém.
*/

//Bibliotecas
#include<stdio.h>
#include<string.h>

int contaLetrasDiferentes(char* frase, int tamanho)
{
  int total = 0;

  for (int i = 0; i < tamanho; i++)
  {
    int teste = 0;

    for (int j = 0; j < i; j++)
    {
      if (frase[j] == frase[i])
      {
        teste = 1;
        break;
      }
    }

    if (teste = 1)
    {
        total++;
    }
  }

  return total;
}

int main(void)
{
  //Declaração de variáveis.
  char frase[201];
  int tamanho, total;

  //Input de dados.
  printf("Insira uma frase, com um máximo de 200 carcaters.\n");
  fgets(frase, sizeof(frase), stdin);

  tamanho = strlen(frase);

  total = contaLetrasDiferentes(frase, tamanho);
  
  printf("A frase tem %d caracteres distintos.\n", total);

  return 0;
}