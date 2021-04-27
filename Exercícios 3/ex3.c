// //Exercício 3; Exercícios Propostos, página 146.
//   Faça um programa que receba a idade de oito pessoas, calcule e mostre: 
//a) a quantidade de pessoas em cada faixa etária; 
//b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas. 
//c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas.

//Bibliotecas.
#include <stdio.h>
#include <math.h>

int main(void) 
{
    //Input de dados.
    int faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0;//Variáveis das faixa etárias
    int idade;//Variáveis das idades.
    float porcentual1, porcentual5; //Varáveis do porcentual.

    //Cálculo do programa.
    for (int x = 0; x < 8; x++) //Cálculo de pessoas por idade.
    {
       printf("Insira a idade desjada: \n");
       scanf(" %d ", &idade);

       if (idade <= 15)
       {
          faixa1 ++;
       }
       else if (16 <= idade && idade <= 30)
       {
          faixa2 ++;
       }
      else if (31 <= idade && idade <= 45)
       {
          faixa3 ++;
       }
      else if (46 <= idade && idade <= 60)
       {
          faixa4 ++;
       }
       else {faixa5 ++;}
    }
   
   //Cálculo dos percentuais.
   porcentual1 = (faixa1 * 100) / 8;
   porcentual1 = (faixa5 * 100) / 8;
   
   //Output de dados;
      printf(" Idades/faixa etária: %d pessoas até 15 anos, %d pessoas de 16 a 30 anos, %d pessoas de 31 até 45 anos, %d pessoas de 46 até 60 anos e %d pessoas com mais de 60 anos.", faixa1, faixa2, faixa3, faixa4, faixa5);
      printf("\n O percentual de pessoas na primeira faixa etária é igual a %2.f%%", porcentual1);
      printf("\n O percentual de pessoas na última faixa etária é igual a %2.f%%", porcentual5);
}
