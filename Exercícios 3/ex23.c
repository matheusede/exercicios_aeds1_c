//Faça um programa que apresente o menu de opções a seguir, que permita ao usuário escolher a opção desejada, receba os dados necessários para executar a operação e mostre o resultado.
// Verifique a possibilidade de opção inválida e não se preocupe com as restrições como salário inválido. 

//Menu de opções:
//1. Novo salário; 2. Férias; 3. Décimo terceiro;  4. Sair; Digite a opção desejada.

//Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a seguir:
//Até R$ 210,00 15%; De R$ 210,00 a R$ 600,00 (inclusive) 10%; Acima de R$ 600,00 5%

//Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as férias equivalem a seu salário acrescido de um terço do salário.

//Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo doze, calcular e mostrar o valor do décimo terceiro.
//Sabe-se que o décimo terceiro equivale a seu salário multiplicado pelo número de meses de trabalho dividido por 12.

//Na opção 4: sair do programa.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.

    int menu = 5, meses = 0;
    float salario, decimoter;

    while (menu != 0)
    {
        printf("Digite o número correspondente com a opção desejada. \n1- Novo salário \n2- Férias \n3- Décimo terceiro \n4-Sair do programa\n");
        scanf("%i", &menu);

        printf("Insira o valor do salário.\n");
        scanf("%f", &salario);

        switch (menu)
        {
        case 1:
            if (salario <= 210)
            {
                salario += (salario * 0.15);
            }
            else if (salario > 210 && salario <= 600)
            {
                salario += (salario * 0.10);
            }
            else if (salario > 600)
            {
                salario += (salario * 0.05);
            }

            printf("O salário, após o reajuste, é igual a %.2f reais.\n", salario);
            break;
        case 2:
            salario += (salario / 3);
            
            printf("O valor do salário do funcionário é igual a %.2f reais \n", salario);
            break;
        case 3:
            printf("Insira o número de meses de trabalho do funcionário (até 12 meses)\n");
            scanf("%i", &meses);

            decimoter = (meses * salario) / 12;
            
            printf("O décimo terceiro é igual a %.2f reais \n", decimoter);
            break;
        case 4:
            
            return 0;
        default:
            printf("Opção inválida");
            break;
        }
    }
    return 0;
}