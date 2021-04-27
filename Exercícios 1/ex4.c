#include <stdio.h>

int main()
{
    printf("Hello World \n");
    
    //Input de dados.
    int a;
    int b;
    int c;
    int d;
    
    printf("Digite três números inteiros: ");
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    //Cálculo do programa.
    int soma;
    
    soma = a + b + c + d;
    
    //Output de dados.
    
    printf("A soma de %d, %d, %d e %d é %d", a, b, c, d, soma);

    return 0;
}
