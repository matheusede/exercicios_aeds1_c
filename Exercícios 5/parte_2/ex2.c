/*2.Crie uma sub-rotina que receba três números inteiros como parâmetros, 
representando horas, minutos e se-gundos, e os converta em segundos. 
Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

void calculaSegundos(int a, int b, int c)
{
    int segundos = 0;
    segundos += a * 3600;
    segundos += b * 60;
    segundos += c;
    
    printf("O número total em segundos é %d\n", segundos);
}

int main(void)
{
    int horas, minutos, segundos;

    printf("Insira três números que representem um perído de tempo, sendo que o primeiro são as horas, o segundo os minutos e o terceiro os segundos.\n");
    scanf("%d %d %d", &horas, &minutos, &segundos);
    
    calculaSegundos(horas, minutos, segundos);
}