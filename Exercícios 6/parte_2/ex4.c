//Calcular e retornar também a soma dos 𝑛 primeiros termos desta progressão

#include<stdio.h>
#include<math.h>

int calcula_soma_pg(int primeiro, int q, int n)
{
    int sn;

    sn = primeiro * ((pow(q, n) - 1) / (q - 1));

    return sn;
}
int main(void)
{
    int primeiro, posicao, razao, soma;

    printf("Insira o primeiro número, a posição de um enésimo número e a razão da progressão geométrica.\n");
    scanf("%d %d %d", &primeiro, &posicao, &razao);

    soma = calcula_pg(primeiro, razao, posicao);

    printf("A soma dos n primeiros números da progressão é %d", soma);

    return 0;

}