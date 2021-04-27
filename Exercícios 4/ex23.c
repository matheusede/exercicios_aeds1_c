//23.  Faça  um  algoritmo  que  receba  uma  sequência  de números e retorne o maior eo menor número da sequência. 
//A quantidade de números n é fornecida pelo usuário.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declarção de variáveis.
    int numero, menor_numero = numero, maior_numero, repeticao;

    printf("Digite o número de vezes que o programa irá se repetir.\n");
    scanf("%i", &repeticao);

    for (int i = 1; i <= repeticao; i++)
    {
        printf("Insira o número positivo desejado (digite 0 para encerrar a contagem).\n");
        scanf("%i", &numero);

        if (numero < 0)
        {
            printf("Números negativos não são permitidos.\n");
            return 0;
        }
        else if (numero > 0)
        {
            if (numero > 0 && numero <= menor_numero)
            {
                menor_numero = numero;
            }
            if (numero >= maior_numero)
            {
                maior_numero = numero;
            }
        }
        
    }

    printf("O menor número inserido foi %i, equanto maior foi %i.", menor_numero, maior_numero);
    
    return 0;
}