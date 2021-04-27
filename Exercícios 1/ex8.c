#include <stdio.h>

int main()
{
    printf("Hello World\n");
    
    //input de dados.
    float base;
    float altura;
    
    printf("Digite a base da triângulo: ");
    
    scanf("%f", &base);
    
    printf("Digite a altura do triângulo: ");
    
    scanf("%f", &altura);
    
    //cálculo de programas.
    
    float area;
    
    (area = base * altura / 2.0);
    
    //Output de dados.
    
    printf("A área do triângulo é %f", area);

    return 0;
}
