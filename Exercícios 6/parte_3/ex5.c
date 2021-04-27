//Calcular e retornar a soma e o produto (faça funções separadas) dos dígitos de um número inteiro
//informado pelo usuário.

#include<stdio.h>
#include<math.h>

void primeiroDigito(int n, int *primeiro_digito)
{
    *primeiro_digito = n * 0.1;

}
void segundoDigito (int n, int *segundo_digito)
{

    *segundo_digito = n % 10;

}
void calculaSomaDigitos(int n, int *soma)
{
    int primeiro_digito, segundo_digito;

    primeiroDigito(n, &primeiro_digito);
    segundoDigito(n, &segundo_digito);

    *soma = primeiro_digito + segundo_digito;

}
void calculaProdutoDigitos(int n, int * produto)
{
    int primeiro_digito, segundo_digito;

    primeiroDigito(n, &primeiro_digito);
    segundoDigito(n, &segundo_digito);

    *produto = primeiro_digito * segundo_digito;

}
int main(void)
{
    int n, soma, produto;

    printf("Insira um número inteiro com para realizar a soma e produto de seus dois primeiros digítos.\n");
    scanf("%d", &n);

    calculaSomaDigitos(n, &soma);
    calculaProdutoDigitos(n, &produto);

    printf("A soma é igual à %d\n", soma);
    printf("O produto é igual à %d\n", produto);

    return 0;
}