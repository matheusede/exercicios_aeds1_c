//Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado. Para isso, forneceu o sexo do entrevistado 
//e sua resposta (S — sim; ou N — não). Sabe-se que foram entrevistadas dez pessoas. Faça um programa que calcule e mostre: 
//■ o número de pessoas que responderam sim; 
//■ o número de pessoas que responderam não; 
//■ o número de mulheres que responderam sim; e
//■ a percentagem de homens que responderam não, entre todos os homens analisados. 

//Bibliotecas.
#include<stdio.h>
#include<math.h>

int main (void)
{
    //Declaração de variáveis.
    int sim = 0, nao = 0, masculino = 0, femenino = 0, mulheres_sim = 0, homens_nao = 0;
    char sexo, opiniao;

    //Input de dados.
    for (int i = 1; i <= 10; i++)
    {
        printf("Digite H caso o entrevistado seja um homen ou S caso seja uma mulher\n");
        scanf(" %c", &sexo);
        
        printf("Digite S caso o entrevistado tenha gostado do novo produto ou N caso o contrário\n");
        scanf(" %c", &opiniao);

        switch (sexo)
        {
        case 'H':
            masculino ++;
            break;
        case 'M':
            femenino ++;
        break;
        
        default:
            printf("Operação inválida");
            break;
        }


        switch (opiniao)
        {
        case 'S':
            sim ++;
            break;
        case 'N':
            nao ++;
            break;
        default:
            printf("Opção inválida.");
            break;
        }
        if (sexo == 'M' && opiniao == 'S')
        {
            mulheres_sim ++;
        }
        if (sexo == 'H' && opiniao == 'N')
        {
            homens_nao ++;
        }
        
    }

    //Output de dados.
    printf("%i pessoas responderam sim.\n", sim);
    printf("%i pessoas responderam não.\n", nao);
    printf("%i mulheres responderam sim. \n", mulheres_sim);
    printf("A porcentagem de homens que responderam não é %i%%.", (homens_nao * 100) / masculino);
    
}