#include <math.h>
#include <stdio.h>

int main()
{
    //Input de dados.
    float ne;
    float nf;

    printf("Digite o número de horas extras: ");
    scanf("%f", &ne);

    printf("Digite o número de horas faltadas: ");
    scanf("%f", &nf);

    //Cálculo da gratificação.
    float h;
    h = ne - (2/3 * nf);

    //Output e classiação;
    h *= 60;
    
    if (h >= 2.400)
    {
        printf("O prêmio do(a) funcionário(a) foi igual a 500 reais");
    }
    else if (h > 1800 && h < 2400)
    {
        printf("O prêmio do(a) funcionário(a) foi igual a 400 reais");
    }
    else if (h >= 1200 && h < 1800)
    {
        printf("O prêmio do(a) funcionário(a) foi igual a 300 reais");
    }
    else if (h >= 800 && h < 1200)
    {
        printf("O prêmio do(a) funcionário(a) foi igual a 200 reais");
    }
    else if (h < 600)
    {
        printf("O prêmio do(a) funcionário(a) foi igual a 100 reais");
    }
    
    return 0;
}