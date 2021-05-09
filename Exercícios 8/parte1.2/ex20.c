/*
ex20 p 150
Elabore um programa que preencha uma matriz 5 ! 5 com números reais 
e encontre o maior valor damatriz. 
A seguir, o programa deverá multiplicar cada elemento da diagonal principal
pelo maior valor encontrado e mostrar a matriz resultante após as multiplicações
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

//Procedimento para encontrar o maior elemento de uma matriz.
int encontraOMaiorElemento(int n1, int n2, int m [n1] [n2])
{
    int maiorNumero;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (m [i] [j] > m [i - 1] [j - 1])
            {
                maiorNumero = m [i] [j];
            }
        }
    }
    return maiorNumero;
}

//Procedimento para somar elementos da diagonal principal de uma matriz quadrada.
void multiplicaDiagonalP(int n1, int n2, int m [n1] [n2])
{
    int soma = 0, j = 0;
    for (int i = 0 ; i < n1; i++)
    {
        m [i] [j] =  m [i] [j] * encontraOMaiorElemento(n1, n2, m);
        j++;
    }
}

int main(void) 
{
    //Declaração de variáveis.
    int m [5] [5];

    //Leitura da matriz.
    lerMatriz(5, 5, m);

    //Cálculo da nova matriz
    multiplicaDiagonalP(5, 5, m);

    //Output.
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d  ", m [i] [j]);
        }
        
        printf("\n");
    }
    
    return 0;
}