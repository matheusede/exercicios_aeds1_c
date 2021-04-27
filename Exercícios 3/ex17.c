//Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado dia. 
//Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que estavam assistindo àquele canal. 
//Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa não entrava na pesquisa. Faça um programa que: 

//■ leia um número indeterminado de dados (número do canal e número de pessoas que estavam assistindo); e
//■ calcule e mostre a porcentagem de audiência de cada canal. 
//Para encerrar a entrada de dados, digite o número do canal ZERO.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    int televisao, canal = 1, pessoas, total_pessoas = 0, canal4 = 0, canal5 = 0,canal7 = 0,canal12 = 0;

    //Input de dados.
    while (canal != 0)
    {
        printf("Digite o número correspondente para a situação que a casa se encontra:\n1- Televisão ligada \n2- Televisão desligada.\n");
        scanf("%i", &televisao);

        if (televisao == 1)
        {
            printf("Quantas pessoas estão assistindo no casa?");
            scanf("%i", &pessoas);

            printf("Qual dos canais a seguir está sendo assistido? (Digite 0 para encerrar o programa). \n4 \n5 \n7 \n12 \n");
            scanf("%i", &canal);
            
            total_pessoas += pessoas;

            if (canal == 4)
            {
                canal4 += pessoas;
            }
            
            else if (canal == 5)
            {
                canal5 += pessoas;
            }
            
            else if (canal == 7)
            {
                canal7 += pessoas;
            }
            
            else if (canal == 12)
            {
                canal12 += pessoas;
            }
            
            else{printf("Canal indisponível.\n");}
        }
        
    }

    //Output de dados.
    
    printf("A porcentagem de audiência do canal 4 é igual a %i%%\n", (canal4 * 100) / total_pessoas);
    printf("A porcentagem de audiência do canal 5 é igual a %i%%\n", (canal5 * 100) / total_pessoas);
    printf("A porcentagem de audiência do canal 7 é igual a %i%%\n", (canal7 * 100) / total_pessoas);
    printf("A porcentagem de audiência do canal 12 é igual a %i%%\n", (canal12 * 100) / total_pessoas);
    
    return 0;

}