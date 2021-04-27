//13. Ler 10 valores e contar quantos estão no intervalo [10,20] e quantos deles estão fora deste intervalo. Escrever o resultado das duas contagens.

//Bibliotecas.
#include <math.h>
#include <stdio.h>

int main (void)
{
    //Variáveis.
    int entre10_20 = 0, resto, n;

    for (int i = 1; i <= 10; i++)
    {
        printf("Insira um número qualquer.\n"); //Input de dados.
        scanf("%i", &n);
        
        if (n >= 10 && n <=20)
        {
            entre10_20++;
        }
        else{resto++;}
    }
    
    return 0;
}