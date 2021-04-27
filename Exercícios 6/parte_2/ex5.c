//Calcular e retornar a soma e o produto (faça funções separadas) dos dígitos de um número inteiro
//informado pelo usuário.

#include<stdio.h>
#include<math.h>

int primeiroDigito(int n)
{
    int primeiro_digito;

    primeiro_digito = n * 0.1;

    return primeiro_digito;
}
int segundoDigito (int n)
{
    int segundo_digito;

    segundo_digito = n % 10;

    return segundo_digito;
}
int calculaSomaDigitos(int n)
{
    int primeiro_digito, segundo_digito, soma;

    primeiro_digito = primeiroDigito(n);
    segundo_digito = segundoDigito(n);

    soma = primeiro_digito + segundo_digito;

    return soma;
}
int calculaProdutoDigitos(int n)
{
    int primeiro_digito, segundo_digito, produto;

    primeiro_digito = primeiroDigito(n);
    segundo_digito = segundoDigito(n);

    produto = primeiro_digito * segundo_digito;

    return produto;
}
int main(void)
{
    int n, soma, produto;

    printf("Insira um número inteiro com para realizar a soma e produto de seus dois primeiros digítos.\n");
    scanf("%d", &n);

    soma = calculaSomaDigitos(n);
    produto = calculaProdutoDigitos(n);

    printf("A soma é igual à %d\n", soma);
    printf("O produto é igual à %d\n", produto);

    return 0;
}