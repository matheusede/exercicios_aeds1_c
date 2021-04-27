#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //Input de dados.
    float nota1;
    float nota2;
    float nota3;
    float nota4;

    printf("Insira as quatro notas: ");
    
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    //Cálculo do programa.
    float media;

    media = (nota1 +  nota2 + nota3 + nota4) / 4.0;

    //Output de dados.
    if (media >= 7){
        printf("O aluno foi aprovado.");
    }
    
    else
    {
        printf("O aluno foi reprovado.");
    
    }
    
    return 0;
}
