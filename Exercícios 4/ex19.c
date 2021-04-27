//19. Deseja-se fazer um levantamento a respeito da ausência de alunos à primeira prova de Fundamentos de Computação para cada uma das 14 turmas existentes. 
//Para cada turma, é fornecido um conjunto de valores,sendo que os dois primeiros valores do conjunto correspondem à identificação da turma (A, ou B, ou C, ...) eao número de alunos matriculados, 
//e os demais valores deste conjunto contêm o número de matrícula doalunoe a letra A ou P para o caso de o aluno estar ausente ou presente, respectivamente. 
//Faça um algoritmoque, para cada turma, calcule a porcentagem de ausência e escreva a identificação da turma e a porcentagemcalculada; determine e escreva quantas turmas tiveram porcentagem de ausência superior a 5%

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    char sala, presenca;
    int alunos, alunos_presentes = 0, porcentagem, menor5 = 0;

    for (int i = 1; i <= 14; i++)
    {
        printf("Insira a letra correspodente a turma desajda\n");
        scanf(" %c", &sala);

        printf("Insira o número de alunos presentes na sala.\n");
        scanf("%i", &alunos);

        for (int x = 1; x <= alunos; x++)
        {
            printf("O %i° aluno estava presente? Digite A para ausente ou P para presente.\n", x);
            scanf(" %c", &presenca);

            if (presenca == 'p' || presenca == 'P')
            {
                alunos_presentes ++;
            }
            else if (presenca == 'n' ||presenca == 'N')
            {
                break;
            }
            
        }
        if (porcentagem > 5)
        {
            menor5 ++;
        }
        
        porcentagem = ((alunos - alunos_presentes) * 100) / alunos;
       
        printf("A porcentagem de ausência da turma %c%i foi igual a %i%%\n", sala, alunos, porcentagem);
        
    }
    printf("%i turmas tiveram uma porcentagem ausência maior que 5%");
    
    return 0;
}