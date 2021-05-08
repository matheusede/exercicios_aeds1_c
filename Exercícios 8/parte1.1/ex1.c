/*
Questão 1 -p190
Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre: 
■todos os números pares; 
■a quantidade de números pares; 
■todos os números ímpares; 
■a quantidade de números ímpares.
*/

//Bibliotecas.
#include <stdio.h> 
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    int numeros[6], pares = 0, impares = 0; //vetor de 6 posições, para os seis números.

    //Inicialiazação do vetor.
    for (int i = 0; i < 6; i++)
    {
        numeros[i] = 0;
    }

    //Atribuição doa vetores
    for (int i = 0; i < 6; i++)
    {
        numeros[i] = i + 1; // de 1 a 6
        
    }
    
    printf("Os úmeros pares são "); //Contabilização e exibição dos números pares.
    for (int i = 0; i < 6; i++)
    {
        if (numeros[i] % 2 == 0 && numeros[i] != 0)
        {
            pares ++;
            printf(", %d", numeros[i]);
        }
    }
    printf(".\n Total de pares = %d núemros.\n", pares); //Contabilização e exibição dos números impares.

    printf("Os úmeros ímpares são ");
    for (int i = 0; i < 6; i++)
    {
        if (numeros[i] % 2 != 0)
        {
            impares ++;
            printf(", %d", numeros[i]);
        }
    }
    printf(".\n Total de ímpares = %d números.\n", impares);

    return 0;

}