/*
Ex3 p190.
Faça um programa para controlar o estoque de mercadorias de uma empresa. 
Inicialmente, o programa deverá preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e osegundo, 
ao total desse produto em estoque. 
Logo após, o programa deverá ler um conjunto indeterminadode dados contendo o código de um cliente e o código do produto que ele deseja comprar,
juntamente com a quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar: 
■se o código do produto solicitado existe. Se existir, tentar atender ao pedido; caso contrário, exibir mensagem Código inexistente;
■cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível, 
escrever a mensagem Não temos estoque suficiente dessa mercadoria. Se puder atendê-lo, escrever a mensagem Pedido atendido. Obrigado e volte sempre; 
■efetuar a atualização do estoque somente se o pedido for atendido integralmente; 
■no final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados
*/

//Bbliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de varáveis.
    int codigo[10], estoque[10], codigoCliente = 1, codigoProdutoInput, estoqueInput;

    //Inicialização dos vetores.
    for (int i = 0; i < 10; i++)
    {
        codigo[i] = 0;
        estoque[i] = 0;
    }
    //Atrbuição dos vetores.
    for (int i = 0; i < 10; i++)
    {
        codigo[i] = (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        estoque[i] = (i + 1) * 100;
    }

    for (int i = 1; codigoCliente != 0; i++)
    {
        //Leitura input.
        printf("Insira o código do usuário (0 finaliza o programa), um dos códigos a seguir para o produto desejado e qunatidade de produtos: \n");
        for (int i = 0; i < 10; i++)
        {
            printf("Código do produto %d = %d. Estoque do produto %d = %d unidades.\n", i + 1, codigo[i], i + 1, estoque[i]);
        }
        scanf("%d %d %d", &codigoCliente, &codigoProdutoInput, &estoqueInput);

        if (codigoProdutoInput -1 > codigo[9] || codigoProdutoInput - 1 < codigo[0])
        {
            if (estoque[codigoProdutoInput - 1] - estoqueInput >= 0)
            {
                estoque[codigoProdutoInput - 1] = estoque[codigoProdutoInput - 1] - estoqueInput;
            }
            else 
            {
                printf("Não há estoque o suficiente.\n");
            }
            
        }
        else
        {
           printf("Código inválido.\n");
        }
    }
    

    return 0;
}