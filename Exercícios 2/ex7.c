#include <stdio.h>
#include <math.h>

int main()
{
    //Input de dados.
    float s;
    
    printf("Insira o salário: ");
    scanf("%f", &s);
    
    //Cálculo do programa e output.
    float a;
    float r;
    
    if (s < 500.00)
    {
        a = s * 0.3;
        r = a + s;
       
        printf("O salário reajustado é igual a %.2f", r);
    }
    else
    {
        printf("O salário não sofre reajuste, uma vez que o valor é maior que 500 reais.");
    }

    return 0;
}