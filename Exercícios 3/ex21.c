//Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código. Os códigos utilizados são:

//1, 2, 3, 4 Votos para os respectivos candidatos
//5 Voto nulo
//6 Voto em branco

//Faça um programa que calcule e mostre:
//■ o total de votos para cada candidato; 
//■ o total de votos nulos; 
//■ o total de votos em branco; 
//■ a porcentagem de votos nulos sobre o total de votos; e
//■ a porcentagem de votos em branco sobre o total de votos. 
//Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa deverá mostrar uma mensagem.

//Biblioteas.
#include<stdio.h>
#include<math.h>

int main (void)
{
    //Declaração de variáveis..
    int voto = 5 , quantidade, branco = 0, nulo = 0, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;

    //Input de dados.
    while (voto != 0)
    {
        printf("Digite o número correspondente da opção de voto desejada: \n");
        printf(" 0- Sair do programa \n 1- Candidato 1 \n 2- Candidato 2 \n 3- Candidato 3 \n 4- Candidato 4 \n 5- Nulo \n 6- Em branco");
        scanf("%i", &voto);
        
        quantidade ++;
        
        switch (voto)
        {
        case 1:
            candidato1 ++;
            break;
        case 2:
            candidato2 ++;
            break;
        case 3:
            candidato3 ++;
            break;
        case 4:
            candidato4 ++;
            break;
        case 5:
            nulo++;
            break;
        case 6:
            branco++;
            break;
        default:
            printf("Opção inválida");
            break;
        }
    }

    printf("O total de votos para cada candidato foi: %i para o primeiro, %i para o segundo, %i para o terceiro e %i para o quarto.\n", candidato1, candidato2, candidato3, candidato4);

    printf("O total de votos nulos foi igual a %i votos\n", nulo);

    printf("O total de votos em branco foi igual a %i votos\n", branco);

    printf("A porcentagem de votos nulos foi igual %i%%", ((nulo * 100) / quantidade));
    
    printf("A porcentagem de votos brancos foi igual %i%%", ((branco * 100) / quantidade));
    
    return 0;
}