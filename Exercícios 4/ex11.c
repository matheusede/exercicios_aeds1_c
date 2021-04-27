//11 Faça um algoritmo para ler um valor X (validar para aceitar apenas valores entre 1 [inclusive] e 10 [inclusive]). Escrever a tabuada de X.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    int n;

    //Input de dados.
    printf("Escolha um número de 1 a 10 para que o programa exiba sua tabuada.\n");
    scanf("%i", &n);

    if (n >= 1 && n <=10)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%i X %i = %i\n", n, i, n * i);
        }
        
    }
    return 0;
}