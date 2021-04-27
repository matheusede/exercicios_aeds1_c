#include <stdio.h>
#include <math.h>

int main()
{
    //input de dados.
    float s;

    printf("Insira o salário orginal: ");
    scanf("%f", &s);

    //Cálculo do programa e output de dados.
    float r;
    float sf;

    if (s <= 300.00)
    {
        r = s * 0.5;
        sf = s + r;

        printf("O novo salário é igual a %.2f", sf);
    }
    else if (s > 300.00 && s <= 500.00)
    {
        r = s * 0.4;
        sf = s + r;

        printf("O novo salário é igual a %f", sf);
    }
    else if (s > 500 && s <= 700)
    {
        r = s * 0.3;
        sf = s + r;

        printf("O novo salário é igual a %f", sf);
    }
    else if (s > 700.00 && s <= 800.00)
    {
        r = s * 0.2;
        sf = s + r;

        printf("O novo salário é igual a %f", sf);
    }
    else if (s > 800 && s <= 1000)
    {
        r = s * 0.1;
        sf = s + r;

        printf("O novo salário é igual a %f", sf);
    }
    else if (s > 1000)
    {
        r = s * 0.05;
        sf = s + r;

        printf("O novo salário é igual a %f", sf);
    }
    
    return 0;
}