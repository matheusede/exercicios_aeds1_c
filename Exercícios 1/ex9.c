#include <stdio.h>

int main()
{
    printf("Hello World \n");
    
    //input de dados.
    
    float raio;
    
    printf("Digite o raio do círculo: ");
    
    scanf("%f", &raio);
    
    //Cálculo do programa.
    float area;
    
    area = raio * raio * 3.14;
    
    //output de dados.
    printf("A área do círculo é %.2f", area);

    

    return 0;
}
