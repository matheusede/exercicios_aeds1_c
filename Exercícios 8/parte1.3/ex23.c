/*
Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medidas dos três lados de um triângulo.Elabore sub-rotinas para:
■determinar se esses lados formam um triângulo (sabe-se que, para ser triângulo, a medida de um lado qualquer deve ser inferior ou igual à soma das medidas dos outros dois). 
■determinar e mostrar o tipo de triângulo (equilátero, isósceles ou escaleno), caso as medidas for-mem um triângulo.
Todas as mensagens deverão ser mostradas no programa principal
*/

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