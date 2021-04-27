#include <stdio.h>
#include <math.h>

int main(){
    //Input de dados.
    float a;
    float b;
    int op;

    printf("Digite os dois números que serão usados. ");
    scanf("%f %f", &a, &b);

    printf("Escolha uma das operações a seguir usando seu respectivo número.\n 1-Primeiro número elevado ao segundo.\n 2-Raiza quadrada de ambos.\n 3-Raiz cúbica de ambos.\n");
    scanf("%d", &op);

    //cálculos do programa e output.
     float res;
     float res2;
    if (op == 1)
    {
        res = pow(b, a);
        printf("O resultado é %.2f", res);
    }
    else if (op == 2)
    {
        res = sqrt(a);
        res2 = sqrt(b);
        printf("A raiz quadrada de %.2f e %.2f é %.2f e %.2f", a, b, res, res2);
    }
    else if (op == 3)
    {
        res = cbrt(a);
        res2 = cbrt(b);
        printf("A raiz cubica de %.2f e %.2f é %2.f e %.2f", a, b, res, res2);
    }

    return 0;

}