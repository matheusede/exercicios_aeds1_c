#include <stdio.h>
#include <math.h>

int main ()
{
    //input de dados.
    float pf;

    printf("Insira o preço de fábrica do carro: ");
    scanf("%f", &pf);

    //Cálculos do programa e output de dados.
    float r;
    float pt;
   
    if (pf <= 12000.00)
    {
        r = pf * 0.05;
        pt = pf + r;

        printf("O preço total do carro será %.2f", pt);
    }
    else if (pf > 12000.00 && pf < 25000.00)
    {
        r = (pf * 0.25);
        pt = pf + r;

        printf("O preço total do carro será %.2f", pt);
    }
       else if (pf >= 25000.00)
    {
        r = (pf * 0.35);
        pt = pf + r;

        printf("O preço total do carro será %.2f", pt);
    }

    return 0;
}