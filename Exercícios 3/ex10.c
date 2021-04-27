//// //Exercício 10; Exercícios Propostos, página 147.
// Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos  números primos.

#include<stdio.h>
#include<math.h>

int main()
{
    //input de dados:
    int numero, par = 0, primo = 0, teste = 0;

    //cálculo.
    for (int i = 1; i <= 10; i++)
    {
        printf("Digite um número inteiro qualquer:\n");
        scanf("%i", &numero);

        if ((numero % 2) == 0)
        {
            par += numero;
        }

        for (int x = 2; x <= numero / 2 ; x++)
        {
            if (numero % x == 0)
            {
                teste = 1;
            }
            
        }
        
        if (teste == 0)
        {
            primo += numero;
        }
        
        
    }

    if (par > 0)
    {
        printf("A soma de todos números pares é %i.\n", par);
    }
    else{printf("Nenhum dos números inseridos eram pares.\n");}
    
    if (primo > 0)
    {
        printf("A soma de todos números primos é %i.\n",primo);
    }
    else{printf("Nenhum dos números inseridos eram primos.");}

    return 0;
}