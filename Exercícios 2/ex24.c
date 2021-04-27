#include <stdio.h>
#include <math.h>

int main ()
{
    //input de dados.
    float p;
    int c;
    int s;

    printf("Digite o preço do produto: ");
    scanf("%f", &p);
    
    printf("Escolha o número correspondente a categoria que mais se enquadra com o produto desejado:\n 1- Limpeza\n2- Alimentação.\n3- Vestuário\n");
    scanf("%d", &c);

    printf("Escolha o número que melhor representa a situação do produto desejado:\n 1- Precisa de refrigeração\n 2- Não precisa de refrigeração.");
    scanf("%d", &s);

    //Cálculos do aumento.
    float a;
    float pt;
    
    if (p <= 25)
    {
        if (c == 1)
        {
            a = p * 0.05;
            pt = p + a;
        }
        else if (c == 2)
        {
            a = p * 0.08;
            pt = p + a;
        }
        else if (c == 3)
        {
            a = p * 0.1;
            pt = p + a;
        }
                
    }
    else if (p > 25)
    {
        if (c == 1)
        {
            a = p * 0.12;
            pt = p + a;
        }
        else if (c == 2)
        {
            a = p * 0.15;
            pt = p + a;
        }
        else if (c == 3)
        {
            a = p * 0.18;
            pt = p + a;
        }
                
    }

    //Cálculos do imposto.
    float imp;

    if (c == 2 || s == 1)
    {
        imp = p * 0.05;
    }
    else {imp = p * 0.08;}

    //Classificação e output.
    float pti;
    
    pti = pt;

    printf("O aumento foi equivalente a %.2f, ", a);
    printf("o valor do imposto a %.2f, o preço total a %.2f e ", imp, pti);
    
    if (pti <= 50.00)
    {
        printf("o produto pode ser classificado como barato");
    }
    else if (pti > 50 && pti < 120)
    {
        printf("o produto pode ser classificado como normal");
    }
    else if (pti >= 120)
    {
        printf("o produto pode ser classificado como caro");
    }
    
    return 0;
}