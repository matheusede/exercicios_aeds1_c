/*
Faça um programa que receba uma frase e mostre quantas letras, 
quantos números e quantos espaços existem nela.
*/

//Bibliotecas
#include <stdio.h>
#include <string.h>

int main(void)
{
  //Declaração de variáveis.
  char frase[201];
  int tamanho, contadorEspaco = 0, contadorLetras = 0, contadorNumeros = 0;

  //Input de dados.
  printf("Insira uma frase, com um máximo de 200 carcaters.\n");
  fgets(frase, sizeof(frase), stdin);

  tamanho = strlen(frase);

  for (int i = 0; i < tamanho; i++)
  {
    if (frase[i] == ' ')
    {
      contadorEspaco++;
    }
    else if (frase[i] == '0' || frase[i] == '1' || frase[i] == '2' ||
             frase[i] == '3' || frase[i] == '4' || frase[i] == '5' ||
             frase[i] == '6' || frase[i] == '7' || frase[i] == '8' || frase[i] == '9')
    {
      contadorNumeros++;
    }
    else
    {
      contadorLetras++;
    }
  }

  printf("A frase tem %d espaços, %d letras e %d números.\n", contadorEspaco, contadorLetras, contadorNumeros);

  return 0;
}