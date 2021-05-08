//Bibliotecas.

#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    int vetor10[10], vetor5[5], somaResultado[5], divisorResultado[5], somaVetor5, divisores;

    //Inicialização dos vetores.
    for (int i = 0; i < 10; i++)
    {
        vetor10[i] = 0;
    }
    for (int i = 0; i < 5; i++)
    {
        vetor5[i] = 0;
    }
    
    //Atribundo valores ao vetor.
    for (int i = 0; i < 10; i++)
    {
        vetor10[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        vetor5[i] = i + 1;
    }
    
    //Soma de todos números do segundo vetor.
    for (int i = 0; i < 5; i++)
    {
        somaVetor5 += vetor5[i];
    }
    //Calculando o primeiro resultado.
    for (int i = 0; i < 5; i++)
    {
        for (int  x = 0; x < 10; x++)
        {
            if (vetor10[x] % 2 == 0)
            {
                somaResultado[i] = vetor10[x] + somaVetor5;
            }
        }
    }
    //Calculando o segundo resultado.
    for (int i = 0; i < 5; i++)
    {
        for (int x = 0; x < 10; i++)
        {
            divisores = 0;

            if (vetor10[x] % 2 != 0)
            {
                for (int y = 1; y <= vetor10[x] / 2; y++)
                {
                    if (vetor10[x] % y == 0)
                    {
                        divisores ++;
                    }  
                }
                divisorResultado[i] = divisores;
            }
        }
    }
    printf("O resultado do primeiro vetor é: ");
    for (int i = 0; i < 5; i++)
    {
        printf(", %d", somaResultado[i]);
    }
    printf(".\n O resultado do segundo vetor é: ");
    for (int i = 0; i < 5; i++)
    {
        printf(", %d", divisorResultado[i]);
    }
    printf("\n");
    
    return 0;
}