/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Hello World \n");
    
    //input de dados.
    int a;
    
    printf("Dgite o ano de nascimento: ");
    
    scanf("%d", &a);
    
    //Cálculos do programa.
    int a21;
    int a50;
    
    a21 = 2021 - a;
    
    a50 = 2050 - a;
    
    //output de dados.
    
    printf("A idade atual é %d", a21);
    printf(" e a idade em 2050 será %d.", a50);

    return 0;
}
