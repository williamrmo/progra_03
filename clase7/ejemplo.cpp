//Estructura de un programa C (standard ) - C++
// Encabezados instrucciones para el compilador
#include <iostream>
#include <stdio.h>   // libreria standard de C
#define MAX 100
#define POW(x)  x*x

using namespace std;

class persona
{
private:
    int cedula;
    string nombre;
    float salario;
public:
    persona();
    void set_ced(int c);
    int get_ced();
    string get_nombre() {return nombre;}
    void set_nom(string n);
    void set_sal(float s);
};

persona::persona()   // metodo constructor
{
    cedula = 0;
    nombre= " ";
    salario=0.0;
    cout << "ejec metodo cosntructor " << endl;
}

void persona::set_ced(int c)
{
    cedula = c;
}

int persona::get_ced()
{
    return cedula;
}

// Declaracion de funciones

int suma(int a, int b)
{

    return a+b;

}

void mostrar(string t1)
{
    int m;
    cout << "el parametro recibido es: " << t1 << endl;
    cout << "digite una opcion " << endl;
    cin >> m;  
    //printf("el parametro recibido es: %s \n", t1);
    cerr << "Error archivo no encotrado" << endl;
 
}

// Declaracion del bloque principal (main)

int main( int argc, char *argv[])
{
    persona p1,p2,p3;
    int m, x;
    p1.set_ced(1234);   // p1.cedula = 1234; es un error porque cedula pertenece a la parte privada de la clase

    cout << "la cedula de p1 es " << p1.get_ced();       // p1.cedula;

    m = suma(10,20);

    mostrar("Hola hoy es C++");

    x = POW(8);   // x=8*8;

    return -124;

}

/*

eje01.cpp

e01

$g++ ej01.cpp -o e01

$./e01


$./e01 hoy es sab '11 julio'

argv[0] e01
argv[1] hoy
argv[2] es
argv[3] sab
argv[4] 11 julio



*/