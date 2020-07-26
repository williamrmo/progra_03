#include <iostream>
#include <stdalign.h>/* Para usar el System*/
#define MAX 15

using namespace std;

class pila
{
private:
    int vec[MAX];
    int idx;
public:
    pila();
    void insert(int d);
    int borrar();
    void mostrar();

};

class derivPila : public pila
{
    int codigo;
    string descripcion;
    
    public:
        derivPila();
        int get_codigo(){ return codigo; }
        string descrip(){ return descripcion; }
        void set_codigo(int c);
        void set_descrip(string des);
};

derivPila :: derivPila()
{
    codigo = 0;
    descripcion = " ";
}


pila :: pila()
{
    idx = 0;
}

void pila :: insert(int b)
{
    if(idx == MAX) cout << "Error pila llena" << endl;
    else
    {
        vec[idx] = b;
        idx++;
    }
}

int pila :: borrar()
{
    if(idx == 0) 
    {
        cout << "Error pila vacia" << endl;
        return -99;
    }
    else
    {
        idx--;
        return vec[idx];
    }
}

void pila :: mostrar()
{
    for(int j = idx - 1; j >= 0; j--) cout << vec[j] << " ";

    cout << endl;
}


int main()
{
    pila p1, p2, p3;
    int k, opt;

    p1.insert(15);
    p1.insert(62);
    p1.insert(11);

    cout << "El contenido de p1 es: " << endl;
    p1.mostrar();

    cout << "dato borrado es: " << p1.borrar() << endl;

    cout << "El contenido de p1 es: " << endl;
    p1.mostrar();

    for( int j = 10; j < 20; j = j + 2) p2.insert(j);
    cout << "El contenido de p2 es: " << endl;
    p2.mostrar();

    k = p3.borrar();
    if(k > 0) cout << "dato borrado de p3 es: " << k << endl;
    /* p3.borrar(); */


    while(opt != 4)
    {
        system("clear");
        /*
            Opciones
        */
        cin >> opt;
        switch (opt)
        {
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        
        default:
            break;
        }
    }
}