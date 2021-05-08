/*
Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor. 
Receba os nomes desses vendedores e armazene-os em um terceiro vetor. 
Existem apenas dez vendedores na loja. Calcule e mostre: 
■um relatório com os nomes dos vendedores e os valores a receber referentes à comissão; 
■o total das vendas de todos os vendedores; 
■o maior valor a receber e o nome de quem o receberá; 
■o menor valor a receber e o nome de quem o receberá
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>
#include<string.h>

int main(void)
{
    //Declaração de vairáveis.
    float totalDeVendas[10], percentualDeVendas[10];
    char nomes[10];

    //Inicialização dos vetores.
    for (int i = 0; i < 10; i++)
    {
        totalDeVendas[i] = 0;
        percentualDeVendas[i] = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        nomes[i] = 'a';
    }
    
    //Recebimento dos dados do usuário.
    for (int i = 0; i < 10; i++)
    {
        printf("Insira o nome do %d vendedor: ", i + 1); //Input dos nomes
        scanf(" %45s", &nomes[i]);

        printf("\nInsira o total de vendas do %d vendedor: ", i + 1);  //Input do total de vendas
        scanf("%f", &totalDeVendas[i]); 

        printf("Insira o percentual da comissão do %d vendedor: ", i + 1); //Input do total de vendas
        scanf("%f", &percentualDeVendas[i]);  
    }

    //Output do relatório.
    for (int i = 0; i < 10; i++)
    {
        printf(" %s, total de vendas = %.2f. Valor a ser recebido = R$%.2f.\n", nomes[i], totalDeVendas[i], percentualDeVendas[i]);
    }
    
    return 0;
}