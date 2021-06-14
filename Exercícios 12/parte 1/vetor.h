#include <iostream>
#include <string.h>

using namespace std;

class Vetor {
    
    private:
    int *v;
    int numElementos;
    int tam;
    
    public:
        const static int TAMANHO = 10;

        Vetor();
        int obtemTamanho();
        void insereNoFinal(int novoElemento);
        int posicaoDe (int elemento);
        void alteraEm (int pos, int novoValor);
        int elementoDe (int pos);
        int elementoEm (int pos);
        void reverte();
        void imprime();
        int remove(int elemento);
};