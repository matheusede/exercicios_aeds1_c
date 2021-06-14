#include "vetor.h"

using namespace std;

int main (int argc, char *argv[])
{
 Vetor *v = new Vetor();

 v->insereNoFinal(1);
 
 v->insereNoFinal(2);
 
 v->insereNoFinal(3);
 
 v->insereNoFinal(4); 
 
 v->insereNoFinal(5);

 v->insereNoFinal(6); 
 
 v->insereNoFinal(7);
 
 v->insereNoFinal(8); 
 
 v->insereNoFinal(9);

 int i;

 for (i = 0; i < v->obtemTamanho(); i++)
 

 v->remove(7);
 
 v->imprime();
}