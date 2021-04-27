/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    printf("Hello World \n");
    
    //input de dados.
    float real;
    
    printf("Digite um número real para ser arredondado: ");
    
    scanf("%f", &real);
    
    //Calculo do prgrama.
    int inteiro;
    
    inteiro = round(real);
    
    //output de dados.
    printf("A parte inteira do número é %d.", inteiro);

    return 0;
}
