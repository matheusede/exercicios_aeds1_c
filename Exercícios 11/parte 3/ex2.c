/*
EX1
Uma empresa deseja controlar as vendas realizadas 
por seus vendedores a cada mês, durante um ano inteiro.
Sabe-se que nessa empresa existem quatro vendedores.
É  importante  que  esse  controle  seja  automatizado,  
porque  muitas  consultas  devem  ser  respondidas imediatamente. 
O gerente necessita de um meio para cadastrar as vendas de todos os vendedores e, 
depois, precisa ver um menu contendo as seguintes opções:
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

struct Vendedor
{
    int idV; //Código do vendedor
    char nome[50];
    char telefone[11];
    float mes[12];
};

int verificaCodigo()
{
    return 0;
}

void cadastraVendedor(int nVendedores, struct Vendedor vendedores[])
{
    int tamanho, flag = 1, codigo;

    for (int i = 0; i < nVendedores; i++)
    {

        do
        {
            setbuf(stdin, NULL);
            printf("\n Digite o código do vendedor: ");
            scanf("%d", &codigo);

            flag = verificaCodigo();

            if (flag == 1)
            {
                printf("Código já cadastrado, informe um novo código\n");
            }

            else
                vendedores[i].idV = codigo;

        } while (flag == 1);

        setbuf(stdin, NULL);

        printf("\nDigite o nome do vendedor: ");
        fgets(vendedores[i].nome, sizeof(vendedores[i].nome), stdin);

        tamanho = strlen(vendedores[i].nome);
        vendedores[i].nome[tamanho - 1] = '\0';

        setbuf(stdin, NULL);

        printf("\nDigite o telefone do vendedor: ");
        fgets(vendedores[i].telefone, sizeof(vendedores[i].telefone), stdin);

        tamanho = strlen(vendedores[i].telefone);
        vendedores[i].telefone[tamanho - 1] = '\0';

        setbuf(stdin, NULL);
    }
}

void cadastraVendas(int nVendedores, struct Vendedor vendedores[], int idV, int mes, float valor)
{
    for (int i = 0; i < nVendedores; i++)
    {
        if (idV == vendedores[i].idV && vendedores[i].mes[mes] != 0)
        {
            vendedores[i].mes[mes] = valor;
        }
    }
}
void vendasDteterminadoMes(int mes, int idV, int nVendedores, struct Vendedor vendedores[])
{
    int marcador;

    for (int i = 0; i < nVendedores; i++)
    {
        if (idV == vendedores[i].idV)
        {
            printf("Vendas no mês %d: R$%.2f", mes, vendedores[i].mes[mes]);
        }
    }
}
int totalDeVendas(int nVendedores, struct Vendedor vendedores[], int idV)
{
    int total;

    for (int i = 0; i < nVendedores; i++)
    {
        if (idV == vendedores[i].idV)
        {
            for (int j = 0; j < 12; j++)
            {
                total += vendedores[i].mes[j];
            }
        }
    }

    return total;
}

int vendedorComMaisVendas(int nVendedores, struct Vendedor vendedores[])
{
    float totalDeCadaVendedor[nVendedores], maiorTotal;

    for (int i = 0; i < nVendedores; i++)
    {
        totalDeCadaVendedor[i] = totalDeVendas(nVendedores, vendedores, vendedores[i].idV);
    }

    for (int i = 1; i < nVendedores; i++)
    {
        if (totalDeCadaVendedor[i] > totalDeCadaVendedor[i - 1])
        {
            maiorTotal = i;
        }
    }

    return maiorTotal;
}

int mesComMaisVendas(struct Vendedor vendedores[], int nVendedores)
{
    float totalDeCadaMes[12], maiorTotal;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < nVendedores; j++)
        {
            totalDeCadaMes[i] = vendedores[j].mes[i];
        }
    }

    for (int i = 1; i < 12; i++)
    {
        if (totalDeCadaMes[i] > totalDeCadaMes[i - 1])
        {
            maiorTotal = i;
        }
    }

    return maiorTotal;
}

int main(void)
{
    //Declaração de variáveis
    int nVendedores = 4, idV, mes, menu;
    float valor;
    FILE *arquivo;

    struct Vendedor vendedores[nVendedores];

    arquivo = fopen ("arquivo.txt", "w");    

    //Menu
    while (menu != 7)
    {
        printf("1.Cadastrar vendedor.\n 2.Cadastrar venda.\n 3.Consultar as vendas de um funcionário em determinado mês.\n 4.Consultar o total das vendas de determinado vendedor.\n 5.Mostrar o número do vendedor que mais vendeu em determinado mês.\n 6.Mostrar o número do mês com mais vendas.\n 7.Finalizar o programa.\n 8.Salavar no arquivo.\n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            cadastraVendedor(nVendedores, vendedores);
            break;
        case 2:
            printf("Insira o códgio do vendedor.\n");
            scanf("%f", &idV);

            printf("Insira o mes da venda.\n");
            scanf("%f", &mes);

            printf("Insira o valor da venda.\n");
            scanf("%f", &valor);

            cadastraVendas(nVendedores, vendedores, idV, mes, valor);
            break;
        case 3:
            printf("Insira o códgio do vendedor.\n");
            scanf("%f", &idV);

            printf("Insira o mes da venda.\n");
            scanf("%f", &mes);

            vendasDteterminadoMes(mes, idV, nVendedores, vendedores);
            break;
        case 4:
            printf("Insira o códgio do vendedor.\n");
            scanf("%f", &idV);

            totalDeVendas(nVendedores, vendedores, idV);
            break;
        case 5:
            printf("O vendedor com mais vendas foi o %s.\n", vendedores[vendedorComMaisVendas(nVendedores, vendedores)].nome);
            ;
            break;
        case 6:
             printf("O mês %d foi o com mais vendas.\n", mesComMaisVendas(vendedores, nVendedores));
            break;
        case 7:
            printf("Programa finalizado.\n");
            return 0;
        case 8:
            for (int i = 0; i < nVendedores; i++)
             {
                fprintf(arquivo, "\nCódigo: %d, nome: %s, telefone: %s.\n", vendedores[i].idV, vendedores[i].nome, vendedores[i].telefone);
                for (int j = 0; j < 12; j++)
                {
                    fprintf("mes %d: %.2f", j, vendedores[i].mes[j]);
                }
                
             }
            break;
        default:
            break;
        }
    }
    
    fclose(arquivo);

    return 0;
}