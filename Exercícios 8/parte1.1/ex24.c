/*
ex 24 p 193
Faça um programa que leia um vetor com quinze posições para números inteiros. 
Crie, a seguir, um vetor resultante que contenha todos os números primos do vetor digitado. 
Escreva o vetor resultante.
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

//Procedimento para ler os índeces dos vetores.
void lerVetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
}
//Procedimento para verificar os números primos dentro do vetor.
void verificaPrimo(int v1[], int v2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int x = 2; x <= v1[i] / 2; x++)
        {
            if (v1[i] % x != 0)
            {
                v2[i] = v1[i];
            }
        }
    }
}

int main(void)
{
    //Declaração de variáveis.
    int v1[15], v2[15], i;

    //Inicialização dos vetores.
    for ( i = 0; i < 15; i++)
    {
        v1[i] = 0;
        v2[i] = 0;
    }

    //preenchimento do índice
    printf("Insira 15 valores inteiros para preencher o vetor.\n");
    lerVetor(v1, 15);

    //Verificação primos.
    verificaPrimo(v1, v2, 15);

    //Output de dados.
    printf("O resultado do vetor final, após só recolher os números primos, é: ");
    for ( i = 0; i < 15; i++)
    {
        printf("%d ", v2[i]);
    }
    
    return 0;
}