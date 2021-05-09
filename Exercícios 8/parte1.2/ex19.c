/*
ex19 p 250
Faça um programa que preencha uma matriz 8 ! 6 de inteiros,
calcule e mostre a média dos elementosdas linhas pares da matriz
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

//Função para calcular a média dos elementos localizados.
int calculaMediaLinhasPares(int n1, int n2, int m[n1] [n2])
{
    int soma = 0;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (i != 0 && i % 2 == 0)
            {
                soma += m[i] [j];
            }
        }
    }
    return soma;
}

int main(void)
{
    //Declaração de variáveis.
    int m [8] [6], mediaLinhasPares;

    //Leitura da matriz.
    lerMatriz(8, 6, m);

    //Cálculo.
    mediaLinhasPares = calculaMediaLinhasPares(8, 6, m);

    //Output de dados
    printf("Média dos elementos das linhas pares = %d", mediaLinhasPares);

    return 0;
}   