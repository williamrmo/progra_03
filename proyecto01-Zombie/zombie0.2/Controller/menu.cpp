#include "menu.hpp"

void main_menu()
{
    char opt;

   

    while (opt != 't')
    {   
        cout << "           Zombiland           " << endl;
        cout << "Ingrese 'n' para una nueva parida." << endl;
        cout << "Ingrese 'p' para ver mejores putuaciones." << endl;
        cout << "Ingrese 't' para salir del juego." << endl;
        cout << "Ingrese una opcion: ";
        cin >> opt;

        switch (opt)
        {
            case 'n':
                /* nueva partida */
                new_game();
               
                break;
            case 'p':
                /* mostrar registros */
                break;
            case 't':
                /* Finalizar Juego */
                cout << "Finalizar Juego." << endl;
                break;
            default:
                cout << "Error: movimieto no valido." << endl;
                break;
        }
    }
}

void game_menu()
{
    char opt;

    cout << "                  Zombiland           " << endl;
    cout << "       Ingrese 'a' para mover a la derecha." << endl;
    cout << "       Ingrese 'd' para mover a la izquierda." << endl;
    cout << "       Ingrese 'w' para mover arriba." << endl;
    cout << "       Ingrese 's' para mover abajo." << endl;
    cout << "       Ingrese 't' para salir de la partida." << endl;

    while (opt != 't')
    {   
        cout << "       Ingrese una opcion: ";
        cin >> opt;

        switch (opt)
        {
            case 'a':
                /* validar movimiento */
                break;
            case 'd':
                /* validar movimiento */
                break;
            case 'w':
                /* validar movimiento */
                break;
            case 's':
                /* validar movimiento */
                break;
            case 't':
                /* Finalizar la partida */
                cout << "       Finalizar partida." << endl;
                /*
                    Terminar la partida
                    Generar una nueva
                    Ejecutar el destructor
                */
                break;
            default:
                cout << "       Error: movimieto no valido." << endl;
                break;
        }
    }
    

}

// new_game
void new_game()
{
    char opt;
    static Player a, b;
    string set_name;
    cout << "   Ingrese 'u' J1 VS CPU." << endl;
    cout << "   Ingrese 'd' J1 VS J2." << endl;
    cout << "   Ingrese 't' para salir de la partida." << endl;

    while (opt != 't')
    {   
        cout << "   Ingrese una opcion: ";
        cin >> opt;

        switch (opt)
        {
            case 'u':
                /* J1 VS CPU */
                cout << "   Ingrese su nombre: ";
                cin >> set_name;

                a.set_name(set_name);
                a.set_position(0);

                b.set_name("CPU");
                b.set_position(0);

                show_info(a, b);
                
                game_menu();

                opt = 't';
                
                break;
            case 'd':
                /* validar movimiento */
                cout << "   Ingrese su nombre J1: ";
                cin >> set_name;

                a.set_name(set_name);
                a.set_position(0);

                cout << "   Ingrese su nombre J2: ";
                cin >> set_name;

                b.set_name(set_name);
                b.set_position(0);

                show_info(a, b);

                game_menu();
                
                opt = 't';
                
                break;
            case 't':
                /* Finalizar la partida */
                cout << "   Finalizar partida." << endl;
                /*
                    Terminar la partida
                    Generar una nueva
                    Ejecutar el destructor
                */
                break;
            default:
                cout << "   Error: movimieto no valido." << endl;
                break;
        }
    }
}

void show_info(Player a, Player b)
{
    cout << "Nombre: " << a.get_name() << ", Corazones: " << a.get_life() << ", Puntaje: " << a.get_point() << endl;
    cout << "Nombre: " << b.get_name() << ", Corazones: " << b.get_life() << ", Puntaje: " << b.get_point() << endl;
}
/* move validations */

// left
bool move_a(int pos)
{   

    
    if(pos > 1)
    {
        if((pos - 1) % 5 != 0) return true;
        else return false;
    }
    else return false;
    
}

// right
bool move_d(int pos)
{
    if((pos + 1) % 5 != 0) return true;
    else return false;
}

// up
bool move_w(int pos)
{
    if(pos > 5) return true;
    else return false;
}

// down
bool move_s(int pos, int size)
{
    if(pos < (size - 5)) return true;
    else return false;
    
}