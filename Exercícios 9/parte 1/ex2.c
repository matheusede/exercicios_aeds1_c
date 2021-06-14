/*
EX2
Faça um programa que receba uma frase e mostre cada 
palavra dela em uma linha separada.Exemplo:Frase: 
COMPUTADORESSÃO MÁQUINAS POTENTES Saída: COMPUTADORESSÃO MÁQUINASPOTENTES
*/

//Bibliotecas
#include <stdio.h>
#include <string.h>

//Procedimento para ler matriz

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
      
      else
      {
          printf("\n");
      }
  }
  
  return 0;
}