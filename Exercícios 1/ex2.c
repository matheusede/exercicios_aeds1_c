#include <stdio.h>

int main()
{
    //input de dados
    float s;
    
    printf("Digite o salario inicial: ");
    
    scanf("%f", &s);
    
    //calculo do programa
    double aumento;
    
    aumento = s * 1.10;
    
    //output de dados
    printf("O salario reajustado e %.2f ", aumento);
    
    return 0;
}