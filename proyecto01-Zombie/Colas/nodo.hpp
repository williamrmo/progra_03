#include <string>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *sig;

    void push(Nodo *&frente, Nodo *&fin, int n);
    bool esta_vacia(Nodo *frente);
};

/*

void push(Nodo *&frente, Nodo *&fin, int n)
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
}

bool esta_vacia(Nodo *frente)
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

*/