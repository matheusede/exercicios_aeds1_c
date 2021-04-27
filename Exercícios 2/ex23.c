#include <stdio.h>
#include <math.h>

int main()
{
    //Input de dados.
    int p;
    int q;

    printf("Escolha um produto usando um dos números na tabela a seguir:\n 1 a 10 = R$10.00\n 11 a 20 = R$ 15.00\n 21 a 30 = R$ 20.00\n 31 a 40 R$ = 30.00\n");
    scanf("%d", &p);

    printf("Escolha a quantidade do produto escolhido: ");
    scanf("%d", &q);
    
    //Cálculo do programa. 
    int vt;

    if (p >= 1 && p <= 10)
    {
        p = 10;
        printf("O valor unitário é R$10.00");

        vt = p * q;
        printf(" e o valor total é igual a %d.", vt);
        
    }
    else if (p >= 11 && p <= 20)
    {
        p = 15;
        printf("O valor unitário é R$15.00", vt);

        vt = p * q;
        printf(" e o valor total é igual a %d.", vt);
    }
    else if (p >= 21 && p <= 30)
    {
        p = 20;
        printf("O valor unitário é R$20.00");

        vt = p * q;
        printf(" e o valor total é igual a %d.", vt);
    }
    else if (p >= 31 && p <= 40)
    {
        p = 30;
        printf("O valor unitário é R$30.00");

        vt = p * q;
        printf(" e o valor total é igual a %d.", vt);
    }

    //Ouput de dados e desconto.
    float des;
    float tdes;

    if (vt <= 250)
    {
        des = vt * 0.05;
        tdes = vt + des;

        printf("E o desconto foi igual a %.2f, resultando um total de %.2f reais", des, tdes);
    }
    else if (vt > 250 && vt <= 500)
    {
        des = vt * 0.1;
        tdes = vt + des;

        printf("E o desconto foi igual a %.2f, resultando um total de %.2f reais", des, tdes);
    }
    else if (vt > 500)
    {
        des = vt * 0.15;
        tdes = vt + des;

        printf("E o desconto foi igual a %.2f, resultando um total de %.2f reais", des, tdes);
    }
    return 0;
}