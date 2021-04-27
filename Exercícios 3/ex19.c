//Faça um programa que receba o tipo da ação, ou seja, uma letra a ser comercializada na bolsa de valores,
//o preço de compra e o preço de venda de cada ação e que calcule e mostre:
//■ o lucro de cada ação comercializada;
//■ a quantidade de ações com lucro superior a R$ 1.000,00;
//■ a quantidade de ações com lucro inferior a R$ 200,00;
//■ o lucro total da empresa.
//Finalize com o tipo de ação ‘F’.

//Bibliotecas.
#include <math.h>
#include <stdio.h>

int main(void)
{
    //Declaração de variáveis.
    float venda, compra, lucro, lucro_total = 0;
    char acao;
    int lucro1000 = 0, lucro200 = 0;
    

    while (acao != 'F' || acao != 'f')
    {
        //Input de dados.
        printf("Escolha e insira uma letra que represente a ação (use F para finalizar a operção). \n");
        scanf(" %c", &acao);
         if(acao == 'f' || acao == 'F')
         {
             break;
         }

        printf("Insira o preço de compra.\n");
        scanf(" %f", &compra);

        printf("Insira o preço de venda.\n");
        scanf(" %f", &venda); //Fim do input de dados.

        //Cálculo.
        lucro = venda - compra; //Cálculo de cada ação individual.

        printf("O lucro da ação %c comercializada foi igual a %.2f. \n", acao, lucro);

        lucro_total += lucro; //Cálculo de todas ações até o fim do programa.

        if (lucro > 1000)
        {
            lucro1000++; //Quantidade de ações que lucraram mais de 1000 R$.
        }

        if (lucro < 200)
        {
            lucro200++; //Quantidade de ações que lucraram menos de 200 R$.
        }
    }
    
    printf("%i ações tiveram lucro maior que R$1000,00. \n", lucro1000);
    
    printf("%i ações tiveram um lucro menor que R$200,00. \n", lucro200);
    
    printf("O lucro total da empresa foi igual a R$%.2f.", lucro_total);

    return 0;
}