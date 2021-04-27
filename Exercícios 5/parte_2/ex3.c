/*3.Elabore  uma  sub-rotina que receba dois números como parâmetros e retorne 0, se o primeiro número for divisível pelo segundo número. 
Caso contrário, deverá retornar o próximo divisor. 
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

void calculaResto(int a, int b)
{
    int resto;
    resto = a % b;

    if (resto == 0)
    {
        printf("%d\n", resto);
    }
    else if (resto != 0)
    {
        while(resto != 0)
        {
            b++;
            
            resto = a % b;
        }
        printf("%d\n", b); 
    }
}

int main(void)
{
    int n1, n2;
    printf("Digite dois números para realizar a divisão do primeiro pelo segundo. Caso o resto for diferente de 0, o resultado será o próximo divisor.\n");
    scanf("%d %d", &n1, &n2);

    calculaResto(n1, n2);

    return 0;
}