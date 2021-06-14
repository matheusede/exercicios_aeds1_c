#include "vetor.h"

Vetor::Vetor() 
{
    v = new int [TAMANHO]; 
    for (int i = 0; i < TAMANHO; i++)
    {
        v[i] = 0;
    }
    numElementos = 0;
}

int Vetor::obtemTamanho() 
{ 
    return numElementos; 
}

void Vetor::insereNoFinal(int novoElemento) 
{
    if (numElementos != TAMANHO)
    {
    v[numElementos] = novoElemento;
    numElementos ++;
    }
    else    
        cout << "\n Vetor cheio!\n";

}

int Vetor::posicaoDe (int elemento) 
{ 
    for (int i = 0; i < numElementos; i++)
    {
        if (elemento == v[i])
        {
            return i;
        }
        
    }
    
    return -1; 
}

void Vetor::alteraEm (int pos, int novoValor) 
{ 
    if ((pos >= 0) && (pos < numElementos))
    {
        v[pos] = novoValor;
    }
    else
    {
        cout << "\nPoisção iválida\n";
    }
}

int Vetor::elementoDe (int pos) 
{ 
    return 0; 
}

int Vetor::elementoEm (int pos) 
{ 
    if((pos >= 0) && (pos < numElementos))
        return v[pos];

    else
        cout <<"znPosição inválida!\n";

    return -1; 
}

void Vetor::reverte() 
{ 
    int *temp = new int [numElementos];
    int j = 0;
    for (int i = (numElementos - 1); i >= 0; i--)
    {
        temp[j++] = v[i];
    }
    for (int i = 0; i < numElementos; i++)
    {
        v[i] = temp[i];
    }

    delete temp;
}

void Vetor::imprime() 
{
    for (int i = 0; i < numElementos; i++)
    {
        cout<< v[i] << " ";
    }
    
}