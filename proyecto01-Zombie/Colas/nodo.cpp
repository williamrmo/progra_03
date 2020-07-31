#include "nodo.hpp"
#include <iostream>
void Nodo::push(Nodo *&frente, Nodo *&fin, int n)
{
    Nodo *new_nodo = new Nodo();

    new_nodo -> dato = n;
    new_nodo -> sig = NULL;

    if(esta_vacia(frente))
    {
        frente = new_nodo;
    }
    else
    {
        fin -> sig = new_nodo;
    }
    
    fin = new_nodo;

    cout << "\t Elemento " << n << " insertado a cola correcta \n";
}

bool Nodo::esta_vacia(Nodo *frente)
{
    if(frente == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}