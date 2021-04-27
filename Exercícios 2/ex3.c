#include <locale.h>
#include <math.h>
#include <stdio.h>

int main() {

    //input de dados.
    int n1;
    int n2;
    int n3;
    
    printf ("Digite três números inteiros destintos: ");
    
    scanf ("%d %d  %d", &n1, &n2, &n3);

    //Output de dados.
    if (n1 > n2 && n1 > n3)
    {
        printf("%d é o maior número.", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("%d é o maior número.", n2);
    }
    else if (n3 > n1 && n3 > n2)
    {
        printf("%d é o maior número", n3);
    }

    return 0;
}
