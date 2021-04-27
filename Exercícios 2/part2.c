#include <stdio.h>
#include <math.h>

int main ()
{
    //Input de dados.
    float c;
    int a;
    int f;
    float e;
    float p1;
    float p2;
    float p3;

    printf("Insira o código da matéria (somente números): ");
    scanf("%f", &c);

    printf("Informe qual é o número total de aulas na matéria desejada: ");
    scanf("%d", &a);

    printf("Informe o número das aulas frequentadas pelo aluno na mesma matéria: ");
    scanf("%d", &f);

    printf("Digite a nota total dos exercícios e trabalhos: ");
    scanf("%f", &e);

    printf("Digite as notas de cada uma das três avaliação: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    //Cálculo da frequência.
    float fre;
    float nf;
    float reav;
    
    fre = a * 0.75;
    nf = e + p1 + p2 + p3;

    if (f >= fre)
    {
        if (nf >= 60)
        {
            printf("O aluno foi aprovado, com a nota total igual a %.2f", nf);
        }
        else if (nf <= 60)
        {
            if (nf >= 35)
            {
                printf("Digite a nota da reavaliação: ");
                scanf("%f", &reav);

                if (p1 < p2 && p1 < p3)
                {
                    nf = p2 + p3 + reav + e;

                    if(nf >= 60)
                    {
                        printf("O aluno foi aprvodado.");
                    }
                    else{printf("O aluno foi reprovado.");}
                }
                else if (p2 < p1 && p2 < p3)
                {
                    nf = p1 + p3 + reav + e;

                    if(nf >= 60)
                    {
                        printf("O aluno foi aprvodado.");
                    }
                    else{printf("O aluno foi reprovado.");}
                }
                else if (p3 < p2 && p3 < p1)
                {
                    nf = p2 + p1 + reav + e;

                    if(nf >= 60)
                    {
                        printf("O aluno foi aprvodado.");
                    }
                    else{printf("O aluno foi reprovado.");}
                }
                

            }
            
        }
        else{printf("O aluno foi reprovado");}
        
        
    }
    else {printf("O aluno foi reprovado por frequência, sem direito a reavaliação.");}
    

    return 0;
}