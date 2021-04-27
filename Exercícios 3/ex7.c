// //Exercício 6; Exercícios Propostos, página 147.
//Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre: 
//■ a quantidade de pessoas com idade superior a 50 anos; 
//■ a média das alturas das pessoas com idade entre 10 e 20 anos; 
//■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas. 

//bibliotecas.
#include<stdio.h>
#include<math.h>

int main (void)
{
    //Declaração de variáveis.
    int idade, idade50 = 0, pessoas10_20 = 0;
    float altura, peso, altura10_20 = 0, peso40 = 0;

    //cálculo;
    for (int i = 1; i <= 5; i++)
    {
        printf("Digite a idade da %i° pessoa: \n", i);
        scanf("%i", &idade);

        printf("Digite a altura da %i° pessoa: \n", i);
        scanf(" %f", &altura);

        printf("Digite o peso da %i° pessoa: \n", i);
        scanf(" %f", &peso);

        if (idade > 50)
        {
            idade50 ++;
        }
        if (idade >= 10 && idade <= 20)
        {
            pessoas10_20 ++;
            altura10_20 += altura;
        }
        if (peso < 40)
        {
            peso40 ++;
        }
    }
    //Output de dados.
    if (idade50 >0)
    {
        printf("Há %i pessoas com mais de 50 anos.\n", idade50);
    }
    else{printf("Não há nenhuma pessoa com a idade superior a 50 anos.\n");}

    if (pessoas10_20 > 0)
    {
        printf("A média da altura de pessoas com idade entre 10 e 20 anos é %.2f\n", altura10_20 / pessoas10_20);
    }
    else{printf("Não há nenhuma pessoa com a idade entre 10 a 20 anos\n");}

    if (peso40 > 0)
    {
        printf("A porcentagem de pessoas com peso inferior a 40 kg é %.2f%%.\n", (peso40 *100) / 5);
    }
    else{printf("Não há nenhuma pessoa com peso mmenor qe=ue 40 kg.\n");}  

 return 0;



}
