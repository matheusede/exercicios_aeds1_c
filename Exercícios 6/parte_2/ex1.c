/*1-Calcular e retornar o enésimo termo de uma 
progressão aritmética onde o primeiro  
termo e a razão são informados pelo usuário.
*/

#include<stdio.h>
#include<math.h>

int calcula_pa(int primeiro, int razao, int n)
{
    int an;

    an = (primeiro + (n - 1 ) * razao);

    return an;
}

int main(void)
{
    int primeiro, posicao, razao, n;

    printf("Insira o primeiro número, a posição de um enésimo número e a razão da progressão aritimética.\n");
    scanf("%d %d %d", &primeiro, &posicao, &razao);

    n = calcula_pa(primeiro, razao, posicao);

    printf("O enésimo número da progressão é %d", n);

    return 0;

}