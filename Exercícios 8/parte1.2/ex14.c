/*
ex14 P250
aça um programa que preencha uma matriz 2 ! 3, calcule e mostre a 
quantidade de elementos da ma-triz que não pertencem ao intervalo [5,15]
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

//Procedimento para ler inputs do usuário (matriz).
void lerMatriz(int n1, int n2, int m[n1] [n2])
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("Digite o elemento da linha %d e coluna %d: ", i, j);
            scanf("%d", &m[i] [j]);
            printf("\n");
        }
    }
}

//Função para calcular o número de elementos dentro de um intervalo específíco.
int calculaIntervaloMatriz(int n1, int n2, int m [n1] [n2], int inicioPeriodo, int finalPeriodo)
{
    int total = 0, i, j;

    for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            if (m [i] [j] >= inicioPeriodo && m [i] [j] <= finalPeriodo)
            {
                total ++;
            }
        }
    }
    return total;
}

int main(void)
{
    //Declaração de variáveis.
    int m [2] [3], totalEntreIntervalo;

    //Leitura da matriz.
    lerMatriz(2, 3, m);

    //Cálculo do intervalo.
    totalEntreIntervalo = calculaIntervaloMatriz(2, 3, m, 5, 15);

    //Otput de dados.
    printf("O número de elementos entre 5 e 15 foi igual a %d.\n", totalEntreIntervalo);

    return 0;
}