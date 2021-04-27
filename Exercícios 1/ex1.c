#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    printf("Hello World \n");
    
    //input de dados
    int a;
    int b;
    int c;
    
    printf("Digite três números inteiros: ");
    
    scanf("%d %d %d", &a, &b, &c);
    
    //cálculos dos programa
    double media;
    
    media = (a + b + c)/3.0;
    
    int soma;
    
    soma = a + b + c;
    
    //Output de dados
    printf("A soma de %d, %d e %d é %d ", a, b, c, soma);
    
    printf("e a média de %d, %d e %d é %.3f.", a, b, c, media);

    return 0;
}