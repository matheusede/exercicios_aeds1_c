#include <stdio.h>
#include <math.h>

int main ()
{
    //input de dados.
    int s;

    printf("Digite a senha correta (4531): ");
    scanf("%d", &s);

    //Processammento e output de dados.
    if (s == 4531)
    {
        printf("Senha correta, acesso garantido.");
    }
    else if (s != 4531)
    {
        printf("Senha incorreta, tente novamente");
    }
    
    return 0;
}