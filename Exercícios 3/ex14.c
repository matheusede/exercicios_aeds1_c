//// //Exercício 11; Exercícios Propostos, página 147.
//Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião
//em relação ao filme: ótimo — 3; bom — 2; regular — 1. Faça um programa que receba a idade e a opinião de quinze espectadores, calcule e mostre:
//■ a média das idades das pessoas que responderam ótimo;
//■ a quantidade de pessoas que responderam regular; e
//■ a percentagem de pessoas que responderam bom, entre todos os espectadores analisados.

//bibliotecas.
#include <stdio.h>
#include <math.h>

int main(void)
{
    //input de dados.
    int idade, opiniao, otimo = 0, bom = 0, regular = 0, idade_otimo = 0, idade_total = 0;
    float media_otimo;

    for (int i = 1; i <= 15; i++)
    {
        printf("Digite a idade da %i° pessoa\n", i);
        scanf("%i", &idade);

        idade_total += idade;

        printf("Informe a opinião do cliente de acordo com o número de uma das opções a seguir\n 1-Regular\n 2-Bom\n 3-Otimo\n");
        scanf("%i", &opiniao);

        switch (opiniao)
        {
        case 1:
            regular++;
            printf("%i\n", regular);
            break;
        case 2:
            bom++;
            break;
        case 3:
            otimo++;
            idade_otimo += idade;
            break;
        default:
            printf("Opção inválida.");
            return 0;
        }
    }

    //cálculo.
    
    if(regular > 0)
    {
        printf("%i pessoas responderam regular\n", regular);
    }
    else{printf("Nenhuma pessoa respondeu regular\n");}
    
    if(otimo > 0)
    {
        printf("A média de idade das pessoas que responderam ótimo foi %i anos\n", idade_otimo / otimo);
    }
    else{printf("Nenhuma pessoa respondeu ótimo\n");}
    
    if(bom > 0)
    {
        printf("A pocentagem de pessoas que responderam bom foi igual a %i%%\n", (bom * 100) / 15);
    }
    else{printf("Nenhuma pessoa respondeu bom");}
    
    return 0;
}