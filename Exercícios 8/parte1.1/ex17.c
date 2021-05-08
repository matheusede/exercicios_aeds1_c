/*
ex17 P192
Faça um programa que preencha dois vetores de dez posições cada, determine e 
mostre um terceiro contendo os elementos dos dois vetores anteriores ordenados 
de maneira decrescente.
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

void juntaVetores(int v1[], int n, int v2[], int v3[], int n3)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        v3[i] = v1[i];
    }
    for (int i = 10; i < 20; i++)
    {
        v3[i] = v2[j];
        j ++;
    }
    
}
void organizaDecrescente(int v3[], int n)
{
    int a;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = i + 1; j < n; ++j) 
        {
            if (v3[i] < v3[j]) 
            {
                a = v3[i];
                v3[i] = v3[j];
                v3[j] = a;
            }
        }
    }
}

int main(void)
{
    //Declaração de variáveis.
    int v1[10], v2[10], v3[20];
    //Inicialização dos vetores 
    for (int i = 0; i < 10; i++)
    {
        v1[i] = 0;
        v2[i] = 0;
    }
    for (int i = 0; i < 20; i++)
    {
      v3[i] = 0;
    }
    //Atribuição dos vetores.
    printf("Insira 10 valores para preencher o primeiro vetor.\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v1[i]);
    }
    printf("Insira 10 valores para preencher o segundo vetor.\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v2[i]);
    }
    //Cálculo do terceiro vetor.
    juntaVetores(v1, 10, v2, v3, 20);
    organizaDecrescente(v3, 20);
    //Retorno do vetor 3.
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", v3[i]);
    }
    return 0;
}