/*
ex9 P250
Faça um programa que preencha uma matriz 3 X 3 com números reais e outro valor numérico digitado pelo usuário. 
O programa deverá calcular e mostrar a matriz resultante da multiplicação do número digitado por cada elemento da matriz.
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
//Procedimento para ler vetor.
void lerVetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
}
//Procedimento que multiplica matriz com vetor.
void mulitplicaMatrizVetor(int n1, int n2, int n3, int m[n1] [n2], int v[])
{
    int i, j, k = 0;
    for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            printf("%d X %d = %d.\n", m [i] [j], v[k], m [i] [j] * v[k]);
            k++;
        }
    }
}
int main(void)
{
    //Declaração de variáveis.
    int m[3] [3], v[9];

    //Leitura dos inputs do usúario.
    printf("Insira os números do vetor que irá multiplicar os elementos da matriz.\n");
    lerVetor(v, 9);
    
    //Leitura da matriz.
    lerMatriz(3, 3, m);

    //Output
    printf("Multiplicação dos índices da matriz com os índices do vetor.\n");
    mulitplicaMatrizVetor(3, 3, 9, m, v);
    return 0;
}