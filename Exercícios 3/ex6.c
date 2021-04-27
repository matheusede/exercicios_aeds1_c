// //Exercício 6; Exercícios Propostos, página 147.
//Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba o código e o valor de quinze transações, calcule e mostre:
//■ o valor total das compras à vista; 
//■ o valor total das compras a prazo; 
//■ o valor total das compras efetuadas; e
//■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes. 

#include<stdio.h>
#include<math.h>

int main (void)
{
    //Input de dados: 
    int operacao;
    float transacao, v = 0, p = 0;

    for (int i = 1; i <= 15; i++)
    {
        printf("Digite o valor da transação: \n");
        scanf(" %f", &transacao);

        printf("Digite o número correspondente para a condição desejada: \n1- Á vista \n2- Parcelado");
        scanf(" %i", &operacao);

        switch (operacao)
        {
        case 1:
            v += transacao;
            break;
        case 2:
            p += transacao;
            break;        
        default:
            printf("\nOperação inválida.");
            break;
        }
    }
    printf("O valor total das transações a vista é %2.f.\n", v);
    printf("O valor das tranções parceladas é %2.f.\n", p);
    printf("O valor das transações parceladas e á vista %2.f.\n", p + v);
    printf("O valor da primeira parcela das transações parceladas é %2.f\n", p / 3);

    return 0;
}