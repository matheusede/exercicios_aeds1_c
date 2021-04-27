/*Calcular e retornar o enésimo termo de uma progressão geométrica onde o primeiro termo 
e a razão são informados pelo usuário. 
*/
#include<stdio.h>
#include<math.h>

int calcula_pg(int primeiro, int razao, int n)
{
    int an;

    an = (primeiro * pow(razao, n-1));

    return an;
}

int main(void)
{
    int primeiro, posicao, razao, n;

    printf("Insira o primeiro número, a posição de um enésimo número e a razão da progressão geométrica.\n");
    scanf("%d %d %d", &primeiro, &posicao, &razao);

    n = calcula_pg(primeiro, razao, posicao);

    printf("O enésimo número da progressão é %d", n);

    return 0;

}