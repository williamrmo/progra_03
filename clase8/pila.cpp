#include <iostream>
#include <stdlib.h>
#define MAX 15

using namespace std;

class pila
{
    int vec[MAX];
    int idx;

public:

    pila();
    void insertar(int d);
    int comparar(pila &a);
    int borrar();
    void mostrar();
    pila operator+(pila &a);                      // p3 = p1 + p2;
    int operator==(pila &a);                      // k = p2.borrar();

};  
                                                  // p2.insertar(11);
pila pila::operator+(pila &a)
{
    pila t;
    for(int i=0;i<=idx-1;i++) t.insertar(vec[i]);
    for(int i=0;i<=a.idx-1;i++) t.insertar(a.vec[i]);
    return t;
}

int pila::comparar(pila &a)
{
    if(idx!=a.idx) return 0;
    else 
    {
        for(int x=0;x<=idx-1;x++)
            if(vec[x]!=a.vec[x]) return 0;

        return 1;
    }
}

int pila::operator==(pila &a)
{
    if(idx!=a.idx) return 1;
    else 
    {
        for(int x=0;x<=idx-1;x++)
            if(vec[x]!=a.vec[x]) return 1;

        return 0;
    }
}
  
class derviP : public pila
{
    int codigo;
    string descrip;

public:

    derviP();
    int get_cod(){ return codigo;}
    string get_des(){ return descrip;}
    void set_cod(int c);
    void set_des(string des);

};
derviP::derviP()
{ 
    codigo=0;
    descrip=" " ;
}

void derviP::set_cod(int c)
{
    codigo = c;
}

void derviP::set_des(string des)
{
    descrip= des;
}

pila :: pila()
{
    idx=0;
}

void pila::insertar(int d)
{
    if(idx==MAX) cout << "Error pila llena " << endl;
    else 
    {
        vec[idx] = d;
        idx++;
    }
}

int pila::borrar()
{
    if(idx==0) 
    {
        cout << "Error pila vacia " << endl;

        return -99;
    } 
    else 
    {
        idx--;

        return vec[idx];
    }

}

void pila::mostrar()
{
    for(int j=idx-1; j>=0;j--) cout << vec[j] << " ";

    cout << endl;
}

int main()
{
    pila p1,p2,p3;
    derviP od1,od2,od3;
    int k;
    int op=0,obj,v;         
    string t1;

    od1.set_cod(110);
    od1.set_des("Pila deriv od1");

    cout << " Valores de od1 son: " << od1.get_cod() << " " << od1.get_des() << endl;
    od1.insertar(77);
    od1.insertar(99);
    od1.insertar(111);
    od1.insertar(222);
    cout << "contenido de od1 es: "<< endl;
    od1.mostrar();
    
    cin >> t1;

    p1.insertar(15);
    p1.insertar(62);
    p1.insertar(11);

    cout << "contenido de p1 es: "<< endl;
    p1.mostrar();
    
    k=p1.borrar();
    if (k<0) 
    cout << "dato borrado es : " << k << endl;

    cout << endl;
    cout << "contenido de p1 es: "<< endl;
    p1.mostrar();
    for (int j=10;j<20;j=j+2) p2.insertar(j);
    cout << "contenido de p2 es: "<< endl;
    p2.mostrar();

    p3 = p1 + p2 + p1;
    cout << "contenido de p3 despues de operator + es: "<< endl;
    p3.mostrar();

    if (p2.comparar(p2)==0) 
        cout << "las pilas p1 y p2 son Diff" << endl;
    else 
        cout << "las pilas p1 y p2 son iguales" << endl;

    if (p2==p2) 
        cout << "las pilas p1 y p2 son Diff con sobrecarg op.==" << endl;
    else 
        cout << "las pilas p1 y p2 son iguales con sobrecarg op.==" << endl;
    cin >> t1;
    k=p1.borrar();
    if(k>0) cout << "dato borrado de p1 es : " << k; 
    while(op!=4) {
        system("clear");
        cout << "       Menu " << endl << endl;
        cout << "1. insertar un dato" << endl;
        cout << "2. borrar un dato" << endl;
        cout << "3. mostrar pila " << endl;
        cout << "4. salir" << endl;
        cout << "  Digite opcion " ;
        cin >> op;
        switch(op)
        {
        case 1:
                cout << "digite dato a insertar ";
                cin >> v;
                cout << "insertar en cual obj (1/2/3) ";
                cin >> obj;
                switch(obj)
                {
                case 1:  
                        p1.insertar(v);
                        break;
                case 2: 
                        p2.insertar(v);
                        break;
                case 3: 
                        p3.insertar(v);
                        break;
                }
                cout << "El dato " << v << " fue insertado, dar enter " ;
                cin >> t1;
                break;
        case 2:
                cout << "borrar de cual obj (1/2/3) ";
                cin >> obj;
                switch(obj)
                {
                case 1:  
                        k=p1.borrar();
                        if(k>0) cout << "dato borrado es : " << k <<endl;
                        break;
                case 2: 
                        k=p2.borrar();
                        if(k>0) cout << "dato borrado es : " << k <<endl;
                        break;
                case 3: 
                        k=p3.borrar();
                        if(k>0) cout << "dato borrado es : " << k <<endl;
                        break;
                }
                cout << " dar enter " ;
                cin >> t1;
                break;
        case 3:
                cout << "mostrar cual obj (1/2/3) ";
                cin >> obj;
                switch(obj)
                {
                case 1:  
                        p1.mostrar();
                        break;
                case 2: 
                        p2.mostrar();
                        break;
                case 3: 
                        p3.mostrar();
                        break;
                }
                cout << " dar enter " ;
                cin >> t1;
                break;
        case 4:
                break;
        }
    }

}
