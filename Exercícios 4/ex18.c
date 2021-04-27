//18.  Um  comerciante  deseja  fazer  o  levantamento  do  lucro  das  mercadorias  que  ele  comercializa. 
//Para isto,mandou digitar uma linha para cada mercadoria com o código, preço de compra e preço de venda delas. 
//Faça um algoritmo que determine e escreva quantas mercadorias proporcionam lucro < 10%, 10% ≤ lucro ≤ 20% e lucro > 20%. 
//Determine também e escreva ovalor total de compra e de venda de todas as mercadorias, assim como o lucro total

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    float codigo, preco_compra, preco_venda, preco_venda_total, preco_compra_total, lucro;
    int lucro10, lucro10_20, lucro20;
    
    //Início do loop.
    for (int i = 1; codigo != 0; i++)
    {
        printf("Digite o código no produto (0 finaliza o loop) \n");
        scanf("%f", &codigo);//Input do código.

        printf("Insira o preço de compra \n");
        scanf("%f", &preco_compra);//Input preço de compra.

        printf("Insira o preço de venda \n");
        scanf("%f", &preco_venda);//Input preço de venda.

        preco_compra_total += preco_compra; //Total do preço de compras.
        preco_venda_total += preco_venda;//Total do preço de vendas.

        lucro = preco_venda - preco_compra;//Lucro individual.

        if (lucro < (preco_compra * 0.10))
        {
            lucro10;
        }
        
        else if (lucro >= (preco_compra * 0.10) && lucro <= (preco_compra * 0.20))
        {
            lucro10_20 ++;
        }
        
        else if (lucro > (preco_compra * 0.20))
        {
            lucro20 ++;
        }
    }

    printf("%i produtos deram um lucro menor que 10%, %i entre 10%% e 20%% e %i maior que 20%.\n", lucro10, lucro10_20, lucro20);
    printf("O preço de venda total foi igual a %.2f reais, o de compra foi igual a %.2f reais e o lucro total foi igual a %.2f reais .\n", preco_venda_total, preco_compra_total, preco_venda_total - preco_compra_total);
    
    return 0;
}