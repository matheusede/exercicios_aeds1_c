#include <stdio.h>

int main()
{
    printf("Hello World \n");
    
    //intput de dados.
    
    float d;
    float j;
    
    printf("Digite o valor do depósito: ");
    
    scanf("%f", &d);
    
    printf("Digite a taxa de juros (em decimais): ", &j);
    
    scanf("%f", &j);
    
    //cálculo do programa.
    
    float r;
    
    r = d * j;
    
    float f;
    
    f = d + r;
    
    //output de dados.
    
    printf("A taxa de juros é igual a %.2f", r);
    
    printf(" e o valor total é %.2f", f);

    return 0;
}


