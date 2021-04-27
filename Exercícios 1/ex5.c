#include <stdio.h>

int main()
{
    printf("Hello World \n");
    
    //input de dados.
    float a;
    float b;
    float c;
    float p1;
    float p2;
    float p3;
    
    printf("Digite as três notas:");
    
    scanf("%f %f %f", &a, &b, &c);
    
    printf("Digite os seus respectivos pesos: ");
    
    scanf("%f %f %f", &p1, &p2, &p3);
    
    //Cálculo do programa.
    float media;
    
    media = ((a * p1) + (b * p2) + (c * p3)) / (p1 + p2 + p3);
    
    //Output de dados.
    
    printf("A média ponderada de %.2f, %.2f e %.2f é %.2f", a, b, c, media);

    return 0;
}
