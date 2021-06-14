/*
ex25
Faça  um  programa  que  receba  uma  frase  e  faça  a  
criptografia,  retirando  das  palavras  suas  vogais.  
O programa deverá armazenar essas vogais e suas posições originais em vetores,
 mostrar a frase cripto-grafada e posteriormente descriptografá-la
*/

//Bibliotecas
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Declaração de variáveis.
    char frase[101], letra[101];
    int teste, tamanho;
    
    //Input de dados.
    printf("Insira uma frase para ser criptografada, com um máximo de 100 carcaters.\n");
    fgets(frase, sizeof(frase), stdin);

    tamanho = strlen(frase);

    for (int i=0 ; i< tamanho; i++)
    {    
        if (frase[i]!='a' && frase[i] !='A'
            && frase[i]!='e' && frase[i] !='E'
            && frase[i]!='i' && frase[i] !='I'
            && frase[i]!='o' && frase[i] !='O'
            && frase[i]!='u' && frase[i] !='U')
        {
            letra[i] = frase[i];
            frase[i] = '#';
        }
    }

    printf("%s\n", frase);

    for (int i = 0; i < tamanho; i++)
    {
      if(frase[i] == '#')
      {
        frase[i] = letra[i];
      }
    }

    printf("%s\n", frase);
     
    return 0;
}