//21. Faça um algoritmo para repetir a leitura de uma senha até que ela seja válida. 
//Para cada leitura da senha  incorreta  informada  escrever  a  mensagem  "SENHA  INVÂLIDA".  
//Quando  a  senha  for  informada corretamente deve ser impressa a mensagem "ACESSO PERMITIDO" e o algoritmo deve  ser encerrado. 
//Considere  que  a  senha  correta  é  o  valor  1234.

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Declaração de variáveis.
    int senha = 0;
    
    while (senha != 1234)
    {
        printf("Insira a senha apenas usando números (obs: senha = 1234)\n");
        scanf("%i", &senha);

        if (senha == 1234)
        {
            printf("Senha correta, aceeso permitido.\n");
        }
        else{printf("Senha incorreta.\n");}
    }
    return 0;
}