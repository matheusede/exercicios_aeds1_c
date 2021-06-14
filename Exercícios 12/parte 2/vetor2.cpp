#include "vetor.h"

Vetor::Vetor() 
{
    v = new int [TAMANHO]; 
    for (int i = 0; i < TAMANHO; i++)
    {
        v[i] = 0;
    }
    numElementos = 0;

    tam = TAMANHO;
}

int Vetor::obtemTamanho() 
{ 
    return numElementos; 
}

void Vetor::insereNoFinal(int novoElemento) 
{
    if (numElementos == tam)
    {
        dobraVetor();
    }

    v[numElementos] = novoElemento;
    numElementos ++;
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

void Vetor::dobraVetor()
{
    int *temp = new int [numElementos];
    
    for (int i = 0; i < numElementos; i++)
    {
        temp[i] = v[i];
    }
    
    tam *= 2;

    v = new int [tam];

    for (int i = 0; i < tam; i++)
    {
        v[i] = 0;
    }
    for (int i = 0; i < numElementos; i++)
    {
        v[i] = temp[i];
    }
    
    delete temp;
    
}

int Vetor::remove(int elemento)
{
    for (int i = 0; i < numElementos; i++)
    {
        if (v[i] == elemento)
        {
            v[i] = 0;

            diminuiVetor();
        }
        
    }
    
}

void Vetor::diminuiVetor()
{

    for (int i = 0; i < numElementos; i++)
    {
        if(v[i] == 0)
        {
            for (int j = i; j < numElementos; j++)
            {
                v[j] = v[j+1]; //Substitui todos os índices pelos seus subsequentes, dessa forma "diminuindo o vetor".
            }
            
        }
    }
    
    //Não consegui tirar os 0s no final do vetor :(
}

int Vetor::getTamanhoVetor()
{
    return tam;
}