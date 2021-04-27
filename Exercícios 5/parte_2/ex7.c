/*7.Elabore uma sub-rotina que leia um número não determinado de valores 
positivos e retorne a média aritmé-tica desses valores. 
Terminar a entrada de dados com o valor zero.
*/

//Biblioteca.
#include<stdio.h>
#include<math.h>

void calculaMedia (int n)
{
    int soma = 0, vezes = 0;
    while (n != 0)
    {
        if(n == 0)
        {
            break;
        }
        
        printf("Insiria um número inteiro positivo (0 finaliza).\n");
        scanf("%i", &n);
        
        soma += n;
        vezes ++;
        

    }
    printf("Média = %d", soma / vezes);
}

int main(void)
{

    int n = 1;

    calculaMedia(n);

    return 0;
}