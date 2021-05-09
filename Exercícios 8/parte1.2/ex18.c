/*
ex 18 p250
Crie um programa que preencha uma matriz 5 ! 5 de números reais, 
calcule e mostre a soma dos ele-mentos da diagonal secundária
*/

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

//Procedimento para somar elementos da diagonal secundária de uma matriz quadrada.
int mediaDiagonalS(int n1, int n2, int m [n1] [n2])
{
    int soma = 0, j = n2 - 1, i;
    for (i = 0; i < n1; i++)
    {
      soma +=  m [i] [j];
      j --;
    }
    return soma / i + 1;
}

int main(void)
{
    //Declaração de variáveis.
    int m [10] [10], mediaDiagonalSecundaria;

    //Leitura dos índices da matriz.
    lerMatriz(10, 10, m);

    //Cálculo da média.
    mediaDiagonalSecundaria = mediaDiagonalS(5, 5, m);

    //Output de dados.
    printf("Média dos elementos na diagonal secundária = %d.\n", mediaDiagonalS);

    return 0;
}