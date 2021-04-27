/* PARTE 1 -
Desenvolva uma  calculadora e  implemente  cada  operação como  um  procedimento  em  seuprograma. 
Façaum menu interativo exibindo as opções para que ousuário escolha qual operação realizar. 
Após a escolha  do usuário,  imprima  na  tela  as  instruções  referentes  a  aquela  operação.  
Ao  finalizar  a  exibir o resultadoda operação, exiba novamente o menude opções inicial. 
Uma das opçõesdeve ser a opção para inserir 0 (zero), para sair.
*/

//Bibliotecas:
#include <stdio.h>
#include <math.h>

/*
Algoritmo para soma. a e b são as variáveis usadas para realizar a soma.
*/
void calculaSoma(int a, int b)
{
    int soma;

    soma = a + b;
    printf("%d", soma);
}
/*
Algoritmo para subtração. a e b são as variáveis usadas para realizar a subtração.
*/
void calculaSubtracao(int a, int b)
{
    int subtracao;

    subtracao = a - b;
    printf("%d", subtracao);
}
/*
Algoritmo para multiplicação. a e b são as variáveis usadas para realizar a operaçõa.
*/
void calculaMultiplicao(int a, int b)
{
    int mult;

    mult = a * b;
    printf("%d", mult);
}
/*
Divisão.
a e b sõo as variáveis usadas para realizar a operação.
*/
void calculaDivisao(int a, int b)
{
    int div;

    div = a / b;
    printf("%d", div);
}
/*
Raiz quadrada.
a é o número dentro da raiz.
*/
void calculaRaizaQuadrada(int a)
{
    int raiz;

    raiz = sqrt(a);
    printf("%d", raiz);
}
/*
Potência.
a é o número da base, enquanto b é o número da potência.
*/
void calculaPotencia(int a, int b)
{
    int potencia;

    potencia = pow(a, b);
    printf("%d", potencia);
}
/*
Seno.
a é o grau a ser usado para calcular o seno.
*/
void calculaSeno(int a)
{
    float seno;

    seno = sin(a);
    printf("%.2f", seno);
}
/*
Cosseno.
a é o grau a ser usado para calcular o cosseno.
*/
void calculaCosseno(int a)
{
    float cosseno;

    cosseno = cos(a);
    printf("%.2f", cosseno);
}
/*
Hipotenusa.
a é equivalente ao cateto 1 e b ao cateto 2.
*/
void calculaHipotenusa(int a, int b)
{
    float hipotenusa;

    hipotenusa = hypot(a, b);
    printf("%.2f", hipotenusa);
}
/*
Tangente.
a é o ângulo da tangente.
*/
void calculaTangente(int a)
{
    float tangente;

    tangente = tan(a);
    printf("%.2f", tangente);
}
/*
Logaritmo.
*/
void calculaLogaritmo(int a)
{
    int log;

    log = log10(a);
    printf("%d", log);
}
/*
Área de um rentângulo.
a = altura, b = comprimento.
*/
void calculoAreaRet(float a, float b)
{
    float area;

    area = a * b;
    printf("%.2f", area);
}
/*
Área de uma circuferência.
r = raio.
*/
void calculoAreaCircu(float r)
{
    float area;

    area = pow(r, 2) * 3;
    printf("%.2f", area);
}
/*
Fatorial.
a é o número a ser considerado.
*/
void calculaFatorial(int n)
{
    int fatorial = 1;

    for (int i = n; i >= 1; i--)
    {
        fatorial *= i;
    }

    printf("%d", fatorial);
}
int main(void)
{
    int menu, a, b;

    while (menu != 0)
    {

        printf("Digite o número correspondente com a operação desejada:\n0- Sair do programa.\n1- Soma\n2- Subtração\n3- Multiplicação\n4- Divisão\n5- Raiz quadrada\n");
        printf("6- Potencia\n7- Seno\n8- Cosseno\n9- Hipotenusa de um triângulo retãngulo\n10- Tangente\n11- Logaritmo\n12- Área de um retângulo\n13- Área de uma circuferência\n14- Fatorial.\n");
        scanf("%i", &menu);

        switch (menu)
        {
        case 0:

            return 0;

        case 1:
            printf("Insira os dois números que serão somados.\n");
            scanf("%d %d", &a, &b);
            printf("Resultado = ");
            calculaSoma(a, b);
            printf("\n");
            a = 0;
            b = 0;
            break;

        case 2:
            printf("Insira os dois números que serão subtraidos.\n");
            scanf("%d %d", &a, &b);
            printf("Resultado = ");
            calculaSubtracao(a, b);
            printf("\n");
            a = 0;
            b = 0;
            break;

        case 3:
            printf("Insira os dois números que serão multiplicados.\n");
            scanf("%d %d", &a, &b);
            printf("Resultado = ");
            calculaMultiplicao(a, b);
            printf("\n");
            a = 0;
            b = 0;
            break;

        case 4:
            printf("Insira os dois números que serão divididos.\n");
            scanf("%d %d", &a, &b);
            printf("Resultado = ");
            calculaDivisao(a, b);
            printf("\n");
            a = 0;
            b = 0;
            break;

        case 5:
            printf("Insira um número para calcular a raiz.\n");
            scanf("%d", &a);
            printf("Resultado = ");
            calculaRaizaQuadrada(a);
            printf("\n");
            a = 0;
            break;
            
        case 6:
            printf("Insira o número que será potencializado e o expoente.\n");
            scanf("%d %d", &a, &b);
            printf("Resultado = ");
            calculaPotencia(a, b);
            printf("\n");
            a = 0;
            b = 0;
            break;

        case 7:
            printf("Insira o valor de um ângulo para calcular o seu seno.\n");
            scanf("%d", &a);
            printf("Resultado = ");
            calculaSeno(a);
            printf("\n");
            a = 0;
            break;

        case 8:
            printf("Insira o valor de um ângulo para calcular o seu cosseno.\n");
            scanf("%d", &a);
            printf("Resultado = ");
            calculaCosseno(a);
            printf("\n");
            a = 0;
            break;
            
        case 9:
            printf("Insira o valor dos dois catetos para calcular a hipotenusa.\n");
            scanf("%d %d", &a, &b);
            printf("Resultado = ");
            calculaHipotenusa(a, b);
            printf("\n");
            a = 0;
            b = 0;
            break;

        case 10:
            printf("Insira o valor de um ângulo para calcular a sua tangente.\n");
            scanf("%d", &a);
            printf("Resultado = ");
            calculaTangente(a);
            printf("\n");
            a = 0;
            break;
       
        case 11:
            printf("Insira um número para descobrir seu logaritmo na base 10.\n");
            scanf("%d", &a);
            printf("Resultado = ");
            calculaLogaritmo(a);
            printf("\n");
            a = 0;
            break;

        case 12:
            printf("Insira os valores para calcular a área do retângulo.\n");
            scanf("%d %d", &a, &b);
            printf("Resultado = ");
            calculoAreaRet(a, b);
            printf("\n");
            a = 0;
            b = 0;
            break;

        case 13:
            printf("Insira o raio da circuferência para calcular sua área..\n");
            scanf("%d", &a);
            printf("Resultado = ");
            calculoAreaCircu(a);
            printf("\n");
            a = 0;
            break;
            
        case 14:
            printf("Insira um número para caluclar seu fatorial.\n");
            scanf("%d", &a);
            printf("Resultado = ");
            calculaFatorial(a);
            printf("\n");
            a = 0;

        default:

            printf("Opção inválida\n");
            break;
        }
    }

    return 0;
}