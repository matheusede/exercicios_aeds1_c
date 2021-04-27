//// //Exercício 11; Exercícios Propostos, página 147.
//Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: preço  final, quantidade de parcelas e valor da parcela. Considere o seguinte:
//■ o preço final para compra à vista tem desconto de 20%;
//■ a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
//■ os percentuais de acréscimo encontram-se na tabela a seguir.

#include <stdio.h>
#include <math.h>

int main(void)
{
    //input de dados.
    float preco_i, preco_f, parcelas;
    int quantidade_parcelas, pagamento;

    printf("Insira o valor do carro: ");
    scanf("%f", &preco_i);

    printf("Escolha sua forma de pagamento digitando seu número respectivo.\n1- À vista\n2- Parcelado\n");
    scanf("%i", &pagamento);

    switch (pagamento)
    {
    case 1:
        preco_f = preco_i - (preco_i * 0.2);
        break;
    case 2:
        printf("Escolha o número de parcelas de acordo com as opções a seguir: 6, 12, 18, 24, 30, 36, 42, 48, 54 ou 60 parcelas.\n");
        scanf("%i", &quantidade_parcelas);
        break;
    default:
        printf("Opção inválida");
        break;
    }
    
    if (pagamento = 1)
    {
        printf("O preço final é igual à %2.f", preco_f);
    }
    else if(pagamento = 2)
    {
        parcelas = preco_i * (quantidade_parcelas / 200);
        
        for (int i = 1; i <= quantidade_parcelas; i++)
            {
                preco_f += parcelas;
            }
        
        printf("O preço de cada parcela é igual à %2.f\n", parcelas);

        printf("O preço final é igual à %2.f", preco_f);
    }
    return 0;
}