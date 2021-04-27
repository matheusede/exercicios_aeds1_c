/*Crie uma sub-rotina que geree mostre os 
três primeiros números primos acima de 100.*/

#include<stdio.h>
#include<math.h>

void calcula_primos()
{
    int teste = 0;

    for (int i = 100; i < 500; i++)
    {
        if (i % 2 != 0 && i % 3 != 0)
        {
            printf("%d, ", i);
            teste ++;
        }
        
        
        if (teste == 3)
        {
            break;
        }
    }

}

int main(void)
{
    printf("Os três primeiros números primos acima de 100 são: \n");
    calcula_primos();

    return 0;
}