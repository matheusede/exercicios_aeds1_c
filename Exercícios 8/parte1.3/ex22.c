/*
ex 22 p299
Criar um programa que: 
■utilize uma sub-rotina para receber os elementos de uma matriz 10X5 de números reais;
■utilize uma sub-rotina para calcular a soma de todos os elementos localizados abaixo 
da sexta linha dessa matriz; 
Os resultados deverão ser mostrados no programa principal.
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

//Procedimento para ler inputs do usuário (matriz).
void lerMatriz(int n1, int n2, float m[n1] [n2])
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("Digite o elemento da linha %d e coluna %d: ", i, j);
            scanf("%f", &m[i] [j]);
            printf("\n");
        }
    }
}

int calculaApartirDaLinhaN(int n1, int n2, int m [n2] [n2], int linha)
{
    int soma = 0;
    for (int i = linha; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            soma += m [n1] [n2];
        }
    }
    return soma;
}

int main(void)
{
    //Declaração de variáveis.
    int m [10] [5], soma;

    //Leitura dos inputs
    lerMatriz(10, 5, m);

    //Cálculo
    soma = calculaApartirDaLinhaN(10, 5, m, 5);

    //Output de dados.
    printf("A soma dos elementos da linha 5 até a 9 é igual a %d.\n", soma);

    return 0;
}