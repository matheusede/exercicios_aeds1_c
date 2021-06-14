/*
EX18
Faça um programa que criptografe cada palavra de uma frase, 
substituindo por ? a última metade de seuscaracteres.Exemplo
*/

//Bibliotecas
#include <string.h>
#include <stdio.h>

void criptografia(char* frase)
{
  int palavra = 0, i, j;

  for (i = 0; frase[i] != '\0'; i++)
  {

    if (frase[i] == ' ')
    {
      for (j = i - (palavra / 2); j < i; j++)
      frase[j] = '?';

      palavra = 0;
    }

    else
    {
      palavra++;
    }
  }

  printf("%s\n", frase);
}

int main(void)
{
  //Declaração de variáveis.
  char frase[101];
  int tamanho, contadorDeLetras, vetor[20], numeroDePalavras = 0;

  //Input de dados.
  printf("Insira uma frase, com um máximo de 200 carcaters.\n");
  fgets(frase, sizeof(frase), stdin);

  criptografia(frase);

  return 0;
}