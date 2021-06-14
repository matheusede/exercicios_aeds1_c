/*
Ex5
Dado dois vetores de inteiros ordenados, gerar um terceiro vetor de contenha os dois 
primeiros, e ainda esteja ordenado.Observe que o usuário deverá informar o tamanho 
dos dois vetores. O terceiro  vetor deverá  ser alocadodinamicamentecom  a  soma do  
tamanho  dos dois  vetores anteriores.
*/

//Bicliotecas
#include<stdio.h>
#include<math.h>

//Procdimehnto para receber on tamanho do vetor
void recebeTamanho(int n)
{
    printf("Insira o tamanho do vetor.\n");
    scanf("%d", &n);
}

//Procedimento para ler os índeces dos vetores.
void lerVetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
}

//Procedimento para ordernar um vetor.
void ordenaVetor(int v[], int n)
{
    int auxiliar;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <n; j++)
        {
            if (v[i] > v[j])
            {
                auxiliar = v[i];
                v[i] = v[j];
                v[j] = auxiliar;
            }
        }
    }
}

int main(void)
{
    //Dneclaração de variáveis
    int i, k, tamanho1, tamanho2, tamanho3 = tamanho1 + tamanho2;

    //Input de dados
    recebeTamanho(tamanho1);
    recebeTamanho(tamanho2);

    printf("Insira os valores dos índices do primeiro veotr.\n"); 
    int v1[tamanho1], v2[tamanho2], v3[tamanho3];
    //priemeiro vetor
    lerVetor(v1, tamanho1);

    printf("Insira os valores dos índices do segundo veotr.\n"); //segundo vetor
    lerVetor(v2, tamanho2);

    //Ordenando os vetores.
    ordenaVetor(v1, tamanho1);//Primeiro vetor
    ordenaVetor(v2, tamanho2);//Segundo vetor

    //Construnção do terceiro vetor
    for(i = 0; i < tamanho1; i ++)
    {
        v3[i] = v1[i];
    }

    k = i;

    for(i = 0; i < tamanho1; i ++)
    {
        v3[k] = v2[i];
        k++;
    }

    ordenaVetor(v3, tamanho3);

    for (int i = 0; i < tamanho3; i++)
    {
        printf("%d ", v3[i]);
    }
    
    
    return 0;
}