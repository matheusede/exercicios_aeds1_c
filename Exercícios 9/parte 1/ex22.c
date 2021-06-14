/*
EX22
Considere uma string composta por várias subsequências, por exemplo, 
cccaaaabbbbxdddddddddaaannn.A menor subsequência é a da letra x, 
com apenas um elemento; a maior subsequência é a da letra d, com nove elementos. 
Faça um programa para ler uma string e mostrar qual é 
a letra que ocorre na maior subsequência e o tamanho dessa subsequência*/

//Bibliotecas
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Declaração de variáveis.
    int tamanho, contador1, contador2, i, j, maiorSequencia;
    char frase[101], letra;;

    //Input do usuário.
    printf("Insira uma frase, com um máximo de 200 carcaters.\n");
    fgets(frase, sizeof(frase), stdin);

    tamanho = strlen(frase);

    //Contagem.
    for (i = 0; i < tamanho;)
    {
        j = i + 1;
        contador1 = 0;

        while ((frase[i] = frase[j]))
        {
            contador1 ++;
            i++;
            j++;
        }

        if (contador1 > contador2)
        {
            maiorSequencia = contador1;
            letra = frase[i];
            contador2 = contador1;
        }
    }    
    
    printf("A maior sequência de caracteres foi %c, com %d repetições.\n", letra, maiorSequencia);
    return 0;
}