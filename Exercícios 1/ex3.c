#include <stdio.h>
#include <math.h>
int main()
{
    printf("Hello World \n");
    
    //Input de dados
    int a;
    
    printf("Digite um numero natural: ");
    
    scanf("%d", &a);
    
    //calculo do programa
    double raiz;
    
    raiz = sqrt(a);
    
    //output 
    printf("A raiz de %d e %.3f.",a, raiz);

    return 0;
}
