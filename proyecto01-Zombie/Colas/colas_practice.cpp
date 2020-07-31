#include <iostream>
#include "nodo.hpp"

using namespace std;

int main() 
{
    Nodo a;
    Nodo *frente = NULL;
    Nodo *fin = NULL;

    int dato;

    cout << "Digite un numero: ";
    cin >> dato;

    a.push(frente, fin, dato);

    return 0;
}