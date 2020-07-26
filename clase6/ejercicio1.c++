#include <iostream>
#include <stdio.h>

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
};

persona::persona(/* args */)
{
    cedula = 0;
    nombre = " ";
    salario = 0.0;
    cout << "ejec metodo constructor";
}

persona::set_ced(int c)
{
    
}

persona::get_ced()
{
}
