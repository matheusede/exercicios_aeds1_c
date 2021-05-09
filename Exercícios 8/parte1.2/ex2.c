/*
ex 2 p 239
Crie um programa que preencha uma matriz 2 X 4 com 
números inteiros, calcule e mostre:
■a quantidade de elementos entre 12 e 20 em cada linha; 
■a média dos elementos pares da matriz
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
//Procedimento para quantificar o número de elementos em um intervalo númerico.
int quantificaMatriz(int n1, int n2, int m[n1] [n2], int inicioIntervalo, int finaIntervalo)
{
    int intervaloNumerico = 0;
    for ( int i = 0; i < n1; i++)
    {
        for ( int j = 0; j < n2; j++)
        {
            if (m [i] [j] >= inicioIntervalo && m [i] [j] <= finaIntervalo)
            {
                intervaloNumerico ++;
            }
        }
    }
    return intervaloNumerico;
}
//Procedimento para calcular a média dos números pares da matriz.
int calculaMedia(int n1, int n2, int m[n1] [n2])
{
    int totalPares = 0, i, media, j, teste = 0;

    for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            if (m[i] [j] % 2 == 0)
            {
                teste ++;
                totalPares += m [i] [j];
            }
        }
    }
    media = totalPares / teste;
    
    return media;
}

int main(void)
{
    //Declaração de variáveis.
    int m [2] [4], i, j, media, entre12e20;

    //Leitura dos inputs.
    lerMatriz(2, 4, m);

    //Quantificação.
    entre12e20 = quantificaMatriz(2, 4, m, 12, 20);
    
    //Média.
    media = calculaMedia(2, 3, m);

    //Output de dados.
    printf("A quantidade de elementos entre 12 e 20 foi igual a %d.\n", entre12e20);
    printf("A média entre os números pares da matriz foi %d.\n", media);

    return 0;
}