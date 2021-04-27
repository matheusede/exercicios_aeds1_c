#include <math.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //Input de dados.

    float a;
    float b;

    printf("Insira as duas nota: ");

    scanf("%f %f", &a, &b);

    //Cálculo do programa.
    float media;

    media = (a + b) / 2.0;

    //Output do programa.
    printf("O aluno ");

    if (media >= 0 && media < 3.0)
    {

        printf("não foi reprovado");
    }

    else if (media >= 3.0 && media < 7.0)
    {
        printf("precisa realizr um exame");
    }

    else if (media >= 7.0 && media <= 10.0)
    {
        printf("foi aprovado");
    }

    printf(" e a média foi igual a %.2f", media);

    return 0;
}