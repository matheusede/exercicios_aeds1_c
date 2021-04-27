//6. Sejam P(x1,y1) e Q(x2,y2) dois pontos quaisquer no plano. A sua distância é dada por:

//Bibliotecas:
#include<math.h>
#include<stdio.h>

int main(void)
{
    //Declaração de variáveis.
    int x1 = 1, x2 = 1, y1 = 1, y2 = 1;
    float distancia;

    //Input das coordenadas.
   
   for (int i = 1; x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0; i++)
   {
    printf("Insira as coordernadas (x1, y1) do ponto P. \n");
    scanf("%i, %i", &x1, &y1);

    printf("Insira as coordernadas (x2, y2) do ponto Q. \n");
    scanf("%i, %i", &x2, &y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distância entre os dois pontos é igual a %.2f.\n", distancia);
    printf("Para interromper o programa insira 0 em todas coordenas.\n");
   }
   
    return 0;
}