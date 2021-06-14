/*
Utilize as informações a seguir para criar um controle automatizado de uma clínica média. 
Sabe-se que essa clínica deseja ter um controle semanal (2a a 6a feira) das consultas realizadas. 
A cada dia podem ser realizadas no máximo duas consultas para cada médico. 
Considere que são cadastrados apenas 3 médicos e 5 pacientes
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Estrutura do paciente
struct Paciente
{
    int idP; //Código do paciente
    char nome [50]; //Nome do paciente
    char endereco[100];//Endereço do paciente
    char telefone [11];//Telefone do paciente
};

struct Medico 
{
    int idM; //Código do médico
    char nome [50];// Nome do médico
    char telefone[11]; //Telefone
};

struct Consulta
{
    int idC; //Código do consulta
    char dia[15];
    char hora[10];
    int idP; //Código dom paciente
    int idM; // código do médico
};

int verificaCodigo()
{
    return 0;
}

//Função para cadatrar usuário
void cadastraPacientes(int nPacientes, struct Paciente pacientes [nPacientes])
{
    int tamanho, codigo;

    for (int i = 0; i < nPacientes; i++)
    {
        int flag = 1;

        do
        {
            setbuf(stdin, NULL);
            printf("\n Digite o código do paceinte: ");
            scanf("%d", &codigo);

            flag = verificaCodigo();

            if (flag == 1)
            {
                printf("Código já cadastrado, informe um novo código\n");
            }

            else
            pacientes[i].idP = codigo;

        } while (flag == 1);
        
        setbuf(stdin, NULL);

        printf("\nDigite o nome do paciente: ");
        fgets(pacientes[i].nome, sizeof(pacientes[i].nome), stdin);

        tamanho = strlen(pacientes[i].nome);
        pacientes[i].nome[tamanho - 1] = '\0';

        setbuf(stdin, NULL);

        printf("\nDigite o end do paciente: ");
        fgets(pacientes[i].endereco, sizeof(pacientes[i].endereco), stdin);

        tamanho = strlen(pacientes[i].endereco);
        pacientes[i].endereco[tamanho - 1] = '\0';

        setbuf(stdin, NULL);

        printf("\nDigite o telefone do paciente: ");
        fgets(pacientes[i].telefone, sizeof(pacientes[i].telefone), stdin);

        tamanho = strlen(pacientes[i].telefone);
        pacientes[i].telefone[tamanho - 1] = '\0';

        setbuf(stdin, NULL);
    }
}

//Função para cadastrarn médico
void cadastraMedico(int nMedicos, struct Medico medicos[nMedicos])
{
    int tamanho, codigo;
    
    for (int i = 0; i < nMedicos; i++)
    {
       int flag = 1;

        do
        {
            printf("\n Digite o código do médico: ");
            scanf("%d", &codigo);

            flag = verificaCodigo();

            if (flag == 1)
            {
                printf("Código já cadastrado, informe um novo código\n");
            }

            else
            medicos[i].idM = codigo;
        } while (flag == 1);

        setbuf(stdin, NULL);

        printf("\nDigite o nome do médico: ");
        fgets(medicos[i].nome, sizeof(medicos[i].nome), stdin);

        tamanho = strlen(medicos[i].nome);
        medicos[i].nome[tamanho - 1] = '\0';

        setbuf(stdin, NULL);

        printf("\nDigite o telefone do médico: ");
        fgets(medicos[i].telefone, sizeof(medicos[i].telefone), stdin);

        tamanho = strlen(medicos[i].telefone);
        medicos[i].telefone[tamanho - 1] = '\0';

        setbuf(stdin, NULL);
        
    }
    
}

//Função para cadastrar consulta
void cadastraConsulta(int nConsultas, int nPacientes, int nMedicos, struct Consulta consultas[nConsultas], struct Paciente pacientes[nPacientes], struct Medico medicos[nMedicos])
{
    int tamanho, codigoC, codigoP, codigoM;
    for (int i = 0; i < nConsultas; i++)
    {
        int flag = 1;
        do
        {
            printf("\n Digite o código da consulta: ");
            scanf("%d", &codigoC);

            flag = verificaCodigo();

            if (flag == 1)
            {
                printf("Código já cadastrado, informe um novo código\n");
            }

            else
            consultas[i].idC = codigoC;

        } while (flag == 1);

        setbuf(stdin, NULL);

        printf("\nDigite o dia da semana que a consulta será marcada (de segunda a sexta):");
        fgets(consultas[i].dia, sizeof(consultas[i].dia), stdin);

        tamanho = strlen(consultas[i].dia);
        consultas[i].dia[tamanho - 1] = '\0';

        setbuf(stdin, NULL);

        printf("\nInsira a hora da consulta:");
        fgets(consultas[i].hora, sizeof(consultas[i].hora), stdin);

        tamanho = strlen(consultas[i].hora);
        consultas[i].hora[tamanho - 1] = '\0';

        setbuf(stdin, NULL);

        printf("\nInsira o códgio do paciente:");
        scanf("%d", &codigoP);

        for (int j = 0; j < nPacientes; j++)
        {
            if (codigoP != pacientes[j].idP)
            {
                printf("Código inexistente.\n");
                codigoP =  0;
            }

            else
            printf("Paciente %s agendado(a);\n", pacientes[j].nome);
        }

        printf("\nInsira o códgio do médico:");
        scanf("%d", &codigoM);

        for (int j = 0; j <nMedicos; j++)
        {
            if (codigoM != medicos[j].idM)
            {
                printf("Código inexistente.\n");
                codigoM =  0;
            }

            else
            printf("Dr.(a) %s agendado(A);\n", medicos[j].nome);
        }


        flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (flag <= 2)
            {
                if (consultas[j].idM == codigoM && consultas[j].dia == consultas[i].dia)
                {
                    flag++;
                }
            }
            
            else
            codigoM = 0;
            printf("Esse médico já vai atender duas consultas nesse dia.\n");
        }
        
    }
    
}

//função para listar a quanitade de consultas
void quantidadeDeConsultas(char nome[50], char dia [20], struct Consulta consultas[], struct Medico medicos[], int nMedicos, int nConsultas)
{
    int contador = 0, marcador, i, j;
    
    for ( j = 0; j < nMedicos; j++)
    {
        if (nome == medicos[i].nome)
        {
            marcador = i;
        }
        
    }
    
    for (i = 0; i < nConsultas; i++)
    {
        if (consultas[i].idM == medicos[marcador].idM && consultas[i].dia == dia)
        {
            contador ++;
        }
        
    }
    
    printf("\nEsse médico tem %d consultas marcadas para esse dia.\n", contador);
}

//Função para exebir consultas de um determinado dia 
void consultasPorDia(char dia[20], struct Consulta consultas[],  struct Medico medicos[], int nMedicos, int nConsultas)
{
    int marcador;

    for (int  i = 0; i < nConsultas; i++)
    {
        if (dia == consultas[i].dia)
        {
           printf("\nCódigo: %d, dia: %s, hora: %s, paciente: %d, médico: %d.", consultas[i].idC, consultas[i].dia, consultas[i].hora, consultas[i].idP, consultas[i].idM);

           for (int j = 0; j < nMedicos; j++)
           {
               if (consultas[i].idM == medicos[j].idM)
               {
                   printf("Responsável pela consulta: Dr.(a) %s.", medicos[j].nome);
               }

           }
            
        }
        
    }
    
}

int main(void)
{
    //Declaração de variáveis
    int nPacientes = 5, nMedicos = 3, nConsultas = 10, i, codigo, tamanho;
    char nome[50], dia[20];

    struct Paciente pacientes [nPacientes];
    struct Medico medicos [nMedicos];
    struct Consulta consultas[nConsultas];

    //Cadastro de pacientes
    cadastraPacientes(nPacientes, pacientes);
    for (i = 0; i < nPacientes; i++)
    {
        printf("\nCódigo: %d, nome: %s, end: %s, tel: %s", pacientes[i].idP, pacientes[i].nome, pacientes[i].endereco, pacientes[i].telefone);
    }

    //Cadastro dos medicos
    cadastraMedico(nMedicos, medicos);
    for (i = 0; i < nMedicos; i++)
    {
        printf("\nCódigo: %d, nome: %s, tel: %s", medicos[i].idM, medicos[i].nome, medicos[i].telefone);
    }

    //Agendamendo 
    cadastraConsulta(nConsultas, nPacientes, nMedicos, consultas, pacientes, medicos);
    for (i = 0; i < nConsultas; i++)
    {
        printf("\nCódigo: %d, dia: %s, hora: %s, paciente: %d, médico: %d.", consultas[i].idC, consultas[i].dia, consultas[i].hora, consultas[i].idP, consultas[i].idM);
    }

    //Função para listar consultas
    printf("\nInsira o nome de um dos médicos registrados.\n");
    fgets(nome, strlen(nome), stdin);

    setbuf(stdin, NULL);
    
    printf("Insira o dia das consultas.\n");
    fgets(dia, strlen(dia), stdin);

    setbuf(stdin, NULL);

    quantidadeDeConsultas(nome, dia, consultas, medicos, nMedicos, nConsultas);

    printf("Insira o dia das consultas.\n");
    fgets(dia, strlen(dia), stdin);

    consultasPorDia(dia, consultas, medicos, nMedicos, nConsultas);

    return 0;
}