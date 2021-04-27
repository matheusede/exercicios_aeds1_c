//14. Ler o número de alunos existentes em uma turma, ler as notas destes alunos, e calcular a média aritmética destas notas.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    int alunos; 
    float nota;

    printf("Insira o número de alunos na sala\n.");
    scanf("%i", &alunos);

    for (int i = 1; i <= alunos; i++)
    {
        printf("Digite a nota do %i° aluno\n", i);
        scanf("%f", &nota);

        nota += nota;
    }
    printf("A média das notas da sala é %.2f", nota / alunos);
    
    return 0;
}