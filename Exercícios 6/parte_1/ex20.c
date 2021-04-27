/*
A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, 
coletando dados sobre o salário eo número de filhos. 
Faça uma sub-rotina que leia esses dados para um número não 
determinado de pessoase retorne a média de salário da população, 
a média do número de filhos, o maior salário e o percentual de pessoas 
com salário inferior a R$ 380,00
*/

#include<stdio.h>
#include<math.h>

float calculaMediaSalario(float renda, int pessoas)
{
    float media;
    int salario_total;

    salario_total += renda;

    media = salario_total / pessoas;

    return media;
}
int calculaMediaFilhos (int filhos, int pessoas)
{
    int filhos_totais;
    float media;

    filhos_totais += filhos;
    media = filhos_totais / pessoas;

    return media;
}
float calculaMaiorSalario(float salario)
{
    int ultimo_salario = 0;

    if (salario > ultimo_salario)
    {
        return salario;
    }
    
    ultimo_salario = salario;

    return ultimo_salario;
}
int calculaPercentual(float salario, int pessoas)
{
    int teste = 0;

    if (salario > 380)
    {
        teste ++;
    }
    
    return teste * 100 / pessoas;
}

int main(void)
{
    int salario, pessoas, filhos, salario_total, filhos_totais, maior_salario, percentual;

    for (pessoas = 1; filhos != -1; pessoas++)
    {
        printf("Insira o número total de filhos e a renda da %d pessoa.(insira -1 no campo dos filhos para fechar o programa)\n", pessoas);
        scanf("%d %f", &filhos, &salario);

        maior_salario = calculaMaiorSalario(salario);
        percentual = calculaPercentual(salario, pessoas);
        salario_total = calculaMediaSalario(salario, pessoas);
        filhos_totais = calculaMediaFilhos(filhos, pessoas);
    }
    printf("Maior salário = %.2f reais.\nPercentural = %d%%.\n Média salário = %.2f reais. Média filhos = %d filhos.", maior_salario, percentual, salario_total, filhos_totais);

    return 0;
}