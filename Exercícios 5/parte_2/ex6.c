/*.Crie uma sub-rotina que receba como parâmetro a altura (alt) 
e o sexo de uma pessoa e retorne seu peso ideal. 
Para homens, deverá calcular o peso ideal usando a fórmula: 
peso ideal = 72.7 *alt − 58; para mulheres: peso ideal = 62.1 *alt − 44.7. 
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

void calculaPeso (float alt, char sexo)
{
    float peso_ideal;

    if(sexo == 'M' || sexo == 'm')
    {
        peso_ideal = 72.7 * alt - 58;
    }
    else if (sexo == 'F' || sexo == 'f')
    {
        peso_ideal = 62.1 * alt - 44.7;
    }
    
    printf("%f", peso_ideal);
}

int main(void)
{
    //Declaração de variáveis.
    float alt;
    char sexo;

    printf("Insria o sexo da pessoa analidasa.\nM- Masculino.\nF- Femenino.\n");
    scanf(" %c", &sexo);

    printf("Insira a altura da pessoa.\n");
    scanf("%f", &alt);

    calculaPeso(alt, sexo);

    return 0;
}