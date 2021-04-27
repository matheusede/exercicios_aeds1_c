//Exercício 1; Exercícios Propostos, página 146.
//Enunciado: Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. Em seguida, organize-os em ordem crescente e decrescente.

//Bibliotecas.
#include <math.h>
#include <stdio.h>

int main(void)
{
    //Input de dados.
    char grupo; //Variável nome do grupo.
    int numero1, numero2, numero3, numero4; //Variável para os números de cada grupo.

    for (int i = 1; i <= 5; i++)
    {
        printf("\nDigite a letra que representa o grupo: "); //Nomear o grupo (ABCD)
        scanf(" %c", &grupo); 
        printf("\n");

        printf("Digite os quatro números do grupo: \n");

        scanf(" %i %i %i %i", &numero1, &numero2, &numero3, &numero4); //Guarda o número de cada variável.
        printf("\n");

        printf("Ordem normal do grupo %c = %i, %i, %i e %i \n \n", grupo, numero1, numero2, numero3, numero4);//Output ordem normal.
    
        //Output das ordens crescente e decescentes.

        for (int c = -900000; c < 900000; c++) //Verifica os números em ordem crescente.
        {
            if (c == numero1 || c == numero2 || c == numero3 || c == numero4)
            {
                printf("%i, ", c);
            }
        
        }
        
        printf("\n");
        
        for (int d = 900000; d > -900000; d--) //Verifica os números em ordem decrescente.
        {
            if (d == numero1 || d == numero2 || d == numero3 || d == numero4)
            {
                
                printf("%i, ", d);
            }
        
        }   


    }
    return 0;
}