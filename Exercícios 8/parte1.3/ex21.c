/*
Ex 21   P 299
Faça uma sub-rotina que receba uma matriz 10X10 
e determine o maior elemento acima da diagonal principal. 
Esse valor deverá ser mostrado no programa principal.
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

//Função para determinar o maior valor acima da diagonal principal.
int maiorValorAcimaDiagonal(int n1, int n2, int m[n1] [n2])
{
    int maiorNumero;
    for ( int i = 0; i < n1 - 1; i++)
    {
        for (int j = i + 1; j < n2 - 1; j++)
        {
            if (m [i] [j] > m [i - 1] [j - 1])
            {
                maiorNumero = m [i] [j];
            }
        }
    }
    
    return maiorNumero;
}

int main(void)
{
    //Declaração de variáveis.
    int m [10] [10], maiorNumero;

    //leitura dos inputs da matriz.
    lerMatriz(10, 10, m);

    //Cálculo
    maiorNumero = maiorValorAcimaDiagonal(10, 10, m);

    //Output
    printf("Maior número acima da diagonal principal = %d.\n", maiorNumero);

    return 0;
}