/*
Faça uma função recursiva para verificarse 
uma palavra é palíndromo (Ex. aba, abcba
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

void lerVetor(char v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &v[i]);
    }
}

int verificaPalindromo(int n, char v[])
{
    if (v[n] == v[n -(n - 1)])
    {
        return 1;
    }

    else
    {
        return 0;
    }
    
}

int main(void)
{
    int n, teste;
    char v[n];
    

    printf("Insira o número de letras na palavra.\n");
    scanf("%d", &n);
    
    printf("Insira uma letra palavra por vez.\n");
    lerVetor(v, n);

    teste = verificaPalindromo(n, v);

    printf("%d.\n", teste);
    
    return 0;
}