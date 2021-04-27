#include <stdio.h>
#include <math.h>

int main ()
{
    //Input de dados.
    int op;
    float inv;

    printf("Escolha o tipo de operação desejada attravés dos seus rescpectivos números a seguir:\n 1- Poupança.\n 2- Fundos de renda fixa.\n");
    scanf("%d", &op);

    printf("Insira o valor desejado: ");
    scanf("%f", &inv);

    //Cálculo do programa e output de dados.
    float r;
    float invf;

    if (op == 1)
    {
        r = inv * 0.03;
        invf = inv + r;

        printf("Após um mês na poupança a quantia é igual a %.2f", invf);
    }
    else if (op == 2)
    {
        r = inv * 0.04;
        invf = inv + r;

        printf("Após um mês na poupança a quantia é igual a %.2f", invf);
    }
    
    return 0;
}   