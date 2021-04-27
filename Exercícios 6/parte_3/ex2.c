//Calcular e retornar também a soma dos 
//primeiros termos desta progressão(veja ex. 1).

#include<stdio.h>
#include<math.h>

void calcula_pa(int primeiro, int razao, int n, int *an)
{

    *an = (primeiro + (n - 1 ) * razao);

}
int calcula_soma_pa(int primeiro, int razao, int n, int *sn)
{
    int an;

   calcula_pa(primeiro, razao, n, &an);

    *sn = ((primeiro + an)*n) / 2;
}
int main(void)
{
    int primeiro, posicao, razao, soma;

    printf("Insira o primeiro número, a posição de um enésimo número e a razão da progressão aritimética.\n");
    scanf("%d %d %d", &primeiro, &posicao, &razao);

    calcula_soma_pa(primeiro, razao, posicao, &soma);

    printf("A soma dos n primeiros números da progressão é %d", soma);

    return 0;

}