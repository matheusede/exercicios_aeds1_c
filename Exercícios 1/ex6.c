#include <stdio.h>

int main()
{
    printf("Hello World");
    
    //input de dados.
    
    float s;
    
    printf("Insira o salário inicial: ");
    
    scanf("%f", &s);
    
    //Cálculo do programa.
    
    float reajuste;
    
    (reajuste = s * 0.02);
    
    float sf;
    
    sf = s - reajuste;
    
    //output de dados.
    
    printf("O salário final é %.2f", sf);
    
    return 0;
}
