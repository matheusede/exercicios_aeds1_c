#include <stdio.h>
#include <math.h>

int main()
{
    //Input de dados.
    int i;

    printf("Insira a idade desejada: ");
    scanf("%d", &i);

    //Processamento de output de dados.
    if (i < 5)
    {
        printf("Pessoas dessa idade são jovens demais para entrarem no esporte.");
    }
    else if (i >= 5 && i <= 7)
    {
        printf("O(a) nadador(a) se enquadra na categoria infantil.");
    }
    else if (i >= 8 && i <= 10)
    {
        printf("O(a) nadador(a) se enquadra na categoria juvenil.");
    }
    else if (i >= 11 && i <= 15)
    {
        printf("O(A) nadador(a) se enquadra na categoria adolescente.");
    }
    else if (i >= 16 && i <= 30)
    {
        printf("O(a) nadador(a) se enquadra na categoria adulto.");
    }
    else if (i >= 30)
    {
        printf("O(a) nadador(a) se enquadra na categoria infantil.");
    }
    
    return 0;
}