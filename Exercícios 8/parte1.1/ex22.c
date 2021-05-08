/* 
ex22 p 193
Faça  um  programa  que  leia  um  vetor  A  de  dez  posições.  
Em  seguida,  compacte  o  vetor,  retirando  osvalores nulos e negativos. 
Armazene esse resultado no vetor B. Mostre o vetor B. 
(Lembre-se: o vetor Bpode não ser completamente preenchido.)
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

//Procedimento para ler os índeces dos vetores.
void lerVetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
}

int main(void)
{
    //Declaraçõa de variáveis.
    int vA[10], vB[10], i;

    //Inicialização dos vetores.
    for ( i = 0; i < 10; i++)
    {
        vA[i] = 0;
        vB[i] = 0;
    }

    //Preenchimentos dos índices.
    printf("Insira 10 valores inteiros para preencher o vetor.\n");
    lerVetor(vA, 10);

    //Output de dados
    printf("O vetor resultante, após retirar os elementos nulos e negativos, é: ");
    //Verificação nulos positivos
    for ( i = 0; i < 10; i++)
    {
        if (vA[i] > 0)
        {
            vB[i] = vA[i];
            printf("%d ", vB[i]);
        }
    }
    
    return 0;
}