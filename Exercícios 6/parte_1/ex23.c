//Ex23
#include<stdio.h>
#include<math.h>

int verificaTriangulo(float a, float b, float c)
{
    int teste;

    if (a <= c + b && b <= a + c && c <= a + b)
    {
        teste = 1;
    }
    
    else
    {
        teste = 0;
    }

    return teste;
}

void tipoTriangulo(float a, float b, float c)
{
    int teste;

    teste = verificaTriangulo(a, b, c);

    if (teste == 1)
    {
        if (a == b && b == c)
        {
            printf("Equilátero.\n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Isóceles.\n");
        }
        else{printf("Escaleno.\n");}
    }
    else{printf("Os lados não formam um triângulo.\n");}
    
}

int main(void)
{
    float a, b, c;

    printf("Insira três medidas qualquer de um triângulo.\n");
    scanf("%f %f %f", &a, &b, &c);

    tipoTriangulo(a, b, c);

    return 0;
}