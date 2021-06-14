/*
EX3
*/

//Bibliotecas
#include<stdio.h>
#include<math.h>

void lerVetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
}

int procuraInteiro(int n, int v[], int x)
{
    static int teste = 0;
    static int contador = 0;

    if (v[n] != x && teste == 0)
    {
        contador ++;
        printf("Contador = %d.\n", contador);
        return (procuraInteiro(n - 1, v, x));
    }

    else
    {
        teste = 1;
        return teste;
    }
    
}

int main(void)
{
    int n, v[n], x, teste;

    printf("Insira o número de elementos dentro do vetor.\n");
    scanf("%d", &n);

    printf("Insira %d números inteiros para preencher o vetor.\n", n);
    lerVetor(v, n);

    printf("Insira o número que será procurado.\n");
    scanf("%d", &n);

    teste = procuraInteiro(n, v, x);

    printf("%d", teste);

    return 0;
}