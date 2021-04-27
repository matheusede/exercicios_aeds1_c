//Faça um programa que apresente o menu de opções a seguir:
//Menu de opções:
//1. Média aritmética 
//2. Média ponderada 
//3. Sair 
//Digite a opção desejada.
//Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
//Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
//Na opção 3: sair do programa.
//Verifique a possibilidade de opção inválida. Nesse caso, o programa deverá mostrar uma mensagem.

///Bibliotecas.
#include<stdio.h>
#include<math.h>

int main (void)
{
    //Declaração de variáveis.
    int operacao = 0, peso1, peso2, peso3;
    float nota1, nota2, nota3, media, media_ponderada;

    //Input de dados.
    while (operacao != 3)
    {
        printf("Escolha uma das operações a seguir usando seu respectivo número. \n");
        printf("1-Receber duas notas e calcular a média aritmética \n 2- Receber três notas, três pesos e calcular a média ponderada. \n 3- Sair do programa\n");
        scanf("%i", &operacao);
        switch (operacao)
        {
        case 1:
            printf("Digite as duas notas da média aritmética: \n");
            scanf("%f %f", &nota1, &nota2);
            
            media = (nota1 + nota2) / 2;
           
            printf("O resultado da média é a %.2f \n", media);
            break;
        
        case 2: 
            printf("Digite as três notas da média ponderada: \n");
            scanf("%f %f %f", &nota1, &nota2, &nota3);
            
            printf("Digite os três pesos da média ponderada: \n");
            scanf("%i %i %i", &peso1, &peso2, &peso3);
            
            media_ponderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
            
            printf("O resultado da média ponderada é igual a %.2f \n", media_ponderada);
            break;
        
        case 3:
            return 0;
        
        default:
            printf("Opção inválida.");
            break;
        }
    }
    return 0;
}