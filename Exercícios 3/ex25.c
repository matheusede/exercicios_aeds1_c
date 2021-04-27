//Uma agência bancária possui vários clientes que podem fazer investimentos com rendimentos mensais, conforme a tabela a seguir:

//1 Poupança 1,5%; 2 Poupança plus 2%; 3 Fundos de renda fixa 4%.

//Faça um programa que leia o código do cliente, o tipo do investimento e o valor investido, e que calcule e mostre o rendimento mensal de acordo com o tipo do investimento.
//No final, o programa deverá mostrar o total investido e o total de juros pagos.
//A leitura terminará quando o código do cliente digitado for menor ou igual a 0.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main (void)
{
    //input de dados.
    int operacao, codigo = 1;
    float investido, total_investido = 0, juros, juros_total;

    while (codigo != 0)
    {
        printf("Insira o código do cliente (qualquer número menos 0, porque ele finaliza o programa): \n");
        scanf("%i", &codigo);
        
        if(codigo == 0)
        {
            break;
        }
        
        printf("Digite o número que corresponda a operação desejada. \n1-Poupança. \n2-Poupança plus. \n3-Fundos de renda fixa.\n");
        scanf("%i", &operacao);

        printf("Digite o valor desejado para o investimento. \n");
        scanf("%f", &investido);

        total_investido += investido;

        switch (operacao)
        {
         
        case 1:
            juros = investido * 0.015;
            printf("O rendimento mensal é igual a %.2f reais\n", juros);
            break;
        
        case 2:
            juros = investido * 0.02;
            printf("O rendimento mensal é igual a %.2f\n", juros);
            break;

        case 3:
            juros = investido * 0.04;
            printf("O rendimento mensal é igual a %.2f\n", juros);

        default:
            printf("Opção inválida.");
            break;

            juros_total += juros;
        }
    }
    printf("O investimento total foi igual a %.2f.\n", total_investido);
    printf("O total de juros pagos foi igual a %.2f.\n", juros_total);
    
}