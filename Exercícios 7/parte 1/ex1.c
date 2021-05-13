/*
Ex1
Faça funções recursivas para calcular a potênciade x elevado a y
*/

//biblioteca 
#include <stdio.h>
#include <math.h>

//Procedimento para calcula potência.
int calculaPotencia(int x, int y)
{
    int potencia;
    if(y != 0)
    {
        return (x * calculaPotencia (x, y));
    }
    else 
    {
      return 1;
    }
}

int main(void)
{
    //Declaração de variáveis.
    int x, y, potencia;

    //Leitura dos inputs.
    printf("Insira um número para ser potencializado e seu expoente.\n");
    scanf("%d %d", &x, &y);

    //Cálculo.
    potencia = calculaPotencia(x, y);

    //Output de dados
    printf("%d elevado a %d = %d\n", x, y, potencia);

    return 0;
}