/*
Calcular e retornar (uma função para cada) as seguintes conversões de um valor 𝑛 informado pelo
usuário: Polegada para centímetros; Centímetros para polegadas (1 polegada = 2,54 cm);
Fahrenheit para Celsius; e Celsius para Fahrenheit (𝐶º = (𝐹º − 32)/1,8 e 𝐹º = (𝐶º ∗ 1,8) + 32). 
*/

#include<stdio.h>
#include<math.h>

float cmParaPolegadas(int n)
{
    float polegada;

    polegada = n / 2.54;

    return polegada;
}
float fParaC(int n)
{
    int c;

    c = ((n - 32) / 1.8);

    return c;
}
float cParaF(int n)
{
    int f;

    f = ((n * 1.8) + 32);

    return f;
}

int main(void)
{
    float n, polegadas, c, f;

    printf("Insira um número que será usado nas seguintes conversões de medidas: Centímetros para polegadas, Fahrenheit para Celsius e Celsius para Fahrenheit.\n");
    scanf("%f", &n);

    polegadas = cmParaPolegadas(n);
    f = cParaF(n);
    c = fParaC(n);

    printf("Centímetros para polegadas = %.2f\n", polegadas);
    printf("Fahrenheit para Celsius = %.2f\n", c);
    printf("Celsius para Fahrenheit = %.2f\n", f);

    return 0;
}