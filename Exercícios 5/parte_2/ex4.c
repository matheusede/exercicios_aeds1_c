/*4.Faça uma sub-rotina que receba como parâmetro o raio de uma esfera, 
calcule e mostre no programa principal o seu volume: v = 4/3 * R3.
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

void volumeEsfera(float r)
{
    float volume;
    volume = 4/3 * (3.14 * pow(r, 3));
    printf("Volume = %.2f m cubicos.", volume);
}

int main(void)
{
    float raio;

    printf("Insira o raio da circuferência.\n");
    scanf("%f", &raio);

    volumeEsfera(raio);

    return 0;
}