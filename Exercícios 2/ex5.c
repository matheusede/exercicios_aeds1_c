#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    int op;

    printf("Digite os dois números que serão usados\n");
    scanf("%f %f", &a, &b);

    printf("Escolha uma das operações a seguir usando seu respectivo número.\n 1-Média.\n 2-Subtração do maior pelo menor.\n 3-Multiplicação.\n 4-Dvisão do primeiro pelo segundo.\n");
    scanf("%d", &op);

    //Cálculo do programa.
    float res;
    if (op == 1)
    {
        res = (a + b) / 2;
    }
    else if (op == 2)
    {
        if (a > b)
        {
            res = a - b;
        }
        else {res = b - a;}
    }
    else if (op == 3)
    {
        res = a * b;
    }
    else if (op == 4)
    {
        res = a / b;
    }
    // Output de dados.
    printf("O resultado é %.2f", res);

    return 0;
}