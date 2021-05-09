/*
EX10 P250
Crie um programa que preencha uma matriz 5 ! 5 
com números inteiros, calcule e mostre a soma:
■dos elementos da linha 4; 
■dos elementos da coluna 2; 
■dos elementos da diagonal principal; 
■dos elementos da diagonal secundária; 
■de todos os elementos da matriz. 
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

//Procedimento para somar elementos da mesma linha
int somaMesmaLinha(int n1, int n2, int m [n1] [n2], int linha)
{
    int soma = 0;
    for (int i = linha; i < linha + 1; i++)
    {
        for ( int j = 0; j < n2; j++)
        {
            soma += m [i] [j]; 
        }
        
    }
    
    return soma;
}

//Procedimento para somar elementos da mesma coluna
int somaMesmaColuna(int n1, int n2, int m [n1] [n2], int coluna)
{
    int soma = 0;
    for (int i = 0 ; i < n1; i++)
    {
        for ( int j = coluna; j < coluna + 1; j++)
        {
            soma += m [i] [j]; 
        }
        
    }
    return soma;
}
//Procedimento para somar elementos da diagonal principal de uma matriz quadrada.
int somaMesmaDiagonalP(int n1, int n2, int m [n1] [n2])
{
    int soma = 0, j = 0;
    for (int i = 0 ; i < n1; i++)
    {
        soma +=  m [i] [j];
        j++;
    }
    return soma;
}
//Procedimento para somar elementos da diagonal secundária de uma matriz quadrada.
int somaMesmaDiagonalS(int n1, int n2, int m [n1] [n2])
{
    int soma = 0, j = n2 - 1;
    for (int i = 0; i < n1; i++)
    {
      soma +=  m [i] [j];
      j --;
    }
    return soma;
}
//Procedimento para somar todos elementos da matriz entre si.
int somaTodosElementos(int n1, int n2, int m [n1] [n2])
{
    int soma = 0, i, j;
    for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            soma += m[i] [j];
        }
    }
    return soma;
}

int main(void)
{
    //Declaração de variáveis.
    int m [5] [5], somaLinha4, somaColuna2, somaDiagonalP, somaDiagonalS, somaTotal;

    //Leitura dos índices da matriz.
    lerMatriz(5, 5, m);

    //Cálculos.
    somaLinha4 = somaMesmaLinha(5, 5, m, 4);
    somaColuna2 = somaMesmaColuna(5, 5, m, 2);
    somaDiagonalP = somaMesmaDiagonalP(5, 5, m);
    somaDiagonalS = somaMesmaDiagonalS(5, 5, m);
    somaTotal = somaTodosElementos (5, 5, m);

    //Output de dados.
    printf("Soma dos elementos da linha 4 = %d.\n", somaLinha4);
    printf("Soma dos elementos da coluna 2 = %d.\n", somaColuna2);
    printf("Soma dos elementos da diagonal princiapal = %d.\n", somaDiagonalP);
    printf("Soma dos elementos da digagonal secundária = %d.\n", somaDiagonalS);
    printf("Soma de todos elementos da matriz = %d.\n", somaTotal);

    return 0;
}