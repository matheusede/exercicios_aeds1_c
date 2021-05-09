/*
ex25 p251
Crie um programa que: 
■receba o preço de dez produtos e armazene-os em um vetor; 
■receba a quantidade estocada de cada um desses produtos, 
em cinco armazéns diferentes, utilizando uma matriz 5 ! 10. 
O programa deverá calcular e mostrar
■a quantidade de produtos estocados em cada um dos armazéns; 
■a quantidade de cada um dos produtos estocados, 
todos os armazéns juntos; 
■o preço do produto que possui maior estoque em um único armazém; 
■o menor estoque armazenado; 
■o custo de cada armazém
*/

//Bbliotecas.
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