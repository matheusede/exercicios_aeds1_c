//22.  Um  posto  de  combustíveis  deseja  determinar  qual  de  seus  produtos  tem  a  preferência  de  seus clientes.  Faça um  algoritmo  para  ler  o  tipo  de  combustível  abastecido  (codificado  da  seguinte  forma: 1.Álcool2.Gasolina 3.Diesel 4.Fim). 
//Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser  solicitado  um  novo código  (até  que  seja  válido).  Ao  ser  informado  o  código  do  combustível,  o  seu respectivo nome deve ser impresso na tela. 
//O programa será encerrado quando o código informado for o número  4  escrevendo  então a  mensagem  :  "MUITO  OBRIGADO"  e  a  quantidade  de  clientes  que abasteceram cada tipo de combustível.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    int alcool = 0, gasolina = 0, diesel = 0, opcao = 0;

    while (opcao != 4)
    {
        printf("Insira o número correspondente com a opção desajada.\n1- Álcool \n2- Gasolina. \n3- Diesel.\n");
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 1:
            alcool ++;
            break;
        
        case 2:
            gasolina ++;
            break;
        
        case 3:
            diesel ++;
            break;
         
        case 4:
            printf("Muito Obrigado.\n");
            printf("A quantidade de clientes que escolheram alcool foi igual a %i\n", alcool);
            printf("A quantidade de clientes que escolheram gasolina foi igual a %i\n", gasolina);
            printf("A quantidade de clientes que escolheram diesel foi igual a %i\n", diesel);
            break;
                               
        default:
            printf("Opção inválida.\n");
            break;
        }
    }
    
    return 0;
}