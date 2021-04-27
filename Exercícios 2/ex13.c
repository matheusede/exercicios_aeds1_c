#include <stdio.h>
#include <math.h>

int main(){
    //input de dados.
    float s;
    printf("Insira o preço base: ");
    scanf("%f", &s);

    //Cálculos do programa e output de dados.
   float r;
   float p;
   
    if (s <= 50.00)
    {
        r = s * 0.05;
        p =  s + r;
        
        printf("O preço reajsutado foi %.2f ", p);
    }
    else if (s > 50 && s < 100)
    {
       r = s * 0.10;
        p =  s + r;

        printf("O preço reajustado foi %.2f ", p);
    }
    else if (s >= 100)
    {
        r = s * 0.15;
        p = s + r;

        printf("O preço reajustado foi %.2f ", p);
    }

    if (p <= 80)
    {
        printf("e ele pode ser classificado como barato.");
    }
    else if (p > 80 && p <= 120)
    {
        printf("e ele pode ser classificado como normal.");
    }    
    else if (p > 120 && p <= 200)
    {
        printf("e ele pode ser considerado caro.");
    }
    else if (p > 200)
    {
        printf("e ele pode ser considerado muito caro.");
    }

    return 0;
}