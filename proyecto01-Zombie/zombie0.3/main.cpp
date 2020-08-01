#include "main.hpp"

int main()
{
    main_menu();

    return 0;
}

/* ---------------------------------------- Menus ---------------------------------------- */
#pragma region "Menus"
    
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

    // menu for new game
    void new_game()
    {
        char opt;
        string set_name;
        static ListBoard c;

        for (int i = 0; i < 25; i++) c.push(( i + 1), 0);

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
                    /*cout << "   Ingrese su nombre: ";
                    cin >> set_name;

                    static Player a(1, set_name),  b(2, "CPU");

                    show_info(a, b);
                    
                    game_menu(a, b, c);

                    opt = 't';*/
                    
                    break;
                case 'd':
                    // validar movimiento 
                    cout << "   Ingrese su nombre J1: ";
                    cin >> set_name;

                    static Player a(1, set_name);

                    cout << "   Ingrese su nombre J2: ";
                    cin >> set_name;
                    static Player b(2, set_name);

                    show_info(a, b);

                    game_menu(a, b, c);
                    
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

    // menu for game
    void game_menu(Player a, Player b, ListBoard board)
    {
        char opt;
        int turn = 1; // for choose hte turn
        int pos;

        generate(board, 25);
        
        cout << "                  Zombiland           " << endl;
        cout << "       Ingrese 'a' para mover a la derecha." << endl;
        cout << "       Ingrese 'd' para mover a la izquierda." << endl;
        cout << "       Ingrese 'w' para mover arriba." << endl;
        cout << "       Ingrese 's' para mover abajo." << endl;
        cout << "       Ingrese 't' para salir de la partida." << endl;

        show_info(a, b);

        canva(a, b, board, 25);

        while (opt != 't')
        {   

            if (turn == a.get_id()) cout << "       Ingrese una opcion " << a.get_name() << ": ";
            else cout << "       Ingrese una opcion " << b.get_name() << ": ";

            cin >> opt;
            
            /* dibujae tablero */
            

            if(turn == 1) pos = a.get_position();
            else pos = b.get_position();
            
            switch (opt)
            {
                case 'a':

                    /* validar movimiento */
                    if (move_a(pos)){
                        if (turn == 1) 
                        {
                            a.set_position(pos - 1);
                            a.set_life(rules_life(a,board,25));
                            a.set_point(rules_point(a,board,25));
                        }
                        else 
                        {
                            b.set_position(pos - 1);
                            b.set_life(rules_life(b,board,25));
                            b.set_point(rules_point(b,board,25));
                        }           
                    }
                    else cout << "Error: movimiento no valido." << endl;
                    
                    break;

                case 'd':

                    /* validar movimiento */
                    if (move_d(pos)){
                        if (turn == 1)
                        {
                            a.set_position(pos + 1);
                            a.set_life(rules_life(a,board,25));
                            a.set_point(rules_point(a,board,25));
                        }
                        else 
                        {
                            b.set_position(pos + 1);
                            b.set_life(rules_life(b,board,25));
                            b.set_point(rules_point(b,board,25));
                        }                         
                    }
                    else cout << "Error: movimiento no valido." << endl;
                    break;

                case 'w':

                    /* validar movimiento */
                    if (move_w(pos)){
                        if (turn == 1) 
                        {
                            a.set_position(pos - 5);  
                            a.set_life(rules_life(a,board,25));
                            a.set_point(rules_point(a,board,25));
                        }
                        else 
                        {
                            b.set_position(pos - 5);   
                            b.set_life(rules_life(b,board,25));
                            b.set_point(rules_point(b,board,25));
                        }                        
                    }
                    else cout << "Error: movimiento no valido." << endl;
                    break;

                case 's':

                    /* validar movimiento */
                    if (move_s(pos, 25)){
                        if (turn == 1) 
                        {
                            a.set_position(pos + 5);   
                            a.set_life(rules_life(a,board,25));
                            a.set_point(rules_point(a,board,25));
                        }
                        else 
                        {
                            b.set_position(pos + 5);  
                            b.set_life(rules_life(b,board,25));
                            b.set_point(rules_point(b,board,25));
                        }                        
                    }
                    else cout << "Error: movimiento no valido." << endl;
                    break;

                case 't':
                    /* Finalizar la partida */
                    cout << "       Finalizar partida." << endl;
                    break;

                default:

                    cout << "       Error: movimieto no valido." << endl;
                    break;
            }

            show_info(a, b);

            canva(a, b, board, 25);
            
            if (a.get_position() == 25)
            {
                cout << "El jugador " << a.get_name() << "ha ganado!" << endl;
                opt = 't';
            }
            else if (b.get_position() == 25)
            {
                cout << "El jugador " << b.get_name() << "ha ganado!" << endl;
                opt = 't';
            }
            else if(a.get_life() == 0)
            {
                cout << "El jugador " << a.get_name() << "ha perdido :(" << endl;
                opt = 't';
            }
            else if(b.get_life() == 0)
            {
                cout << "El jugador " << b.get_name() << "ha perdido :(" << endl;
                opt = 't';
            }


            if(turn == 1) turn = 2;
            else turn = 1;
        }
        

    }

#pragma endregion

/* ---------------------------------------- Game ---------------------------------------- */
#pragma region "Game"
    
    void show_info(Player a, Player b)
    {
        cout << "Nombre: " << a.get_name() << ", Corazones: " << a.get_life() << ", Puntaje: " << a.get_point() << endl;
        cout << "Nombre: " << b.get_name() << ", Corazones: " << b.get_life() << ", Puntaje: " << b.get_point() << endl;
    }

    // generate enemies position and extra live.
    void generate(ListBoard board, int level)
    {
        int enemies;
        int live; 
        int pos;

        switch (level)
        {
            case 25:
                enemies = 5;
                live = 3;
                break;
            case 45:
                enemies = 14;
                live = 3;
                break;
            case 60:
                enemies = 21;
                live = 2;
                break;
            default: // 75
                enemies= 30;
                live = 2;
                break;
        }

        do
        {
            pos = rand() % level + 1;
            cout << "Pos: " << pos << ", content: "<< board.get_content(pos) << ", enemies: " << enemies << ", live: " << live << endl;
            

            if (board.get_content(pos) == 0 && live != 0) 
            {
                board.set_content(pos, 1);
                live--;
            }
            
        } while (live != 0);

        do
        {
            pos = rand() % level + 1;
            cout << "Pos: " << pos << ", content: "<< board.get_content(pos) << ", enemies: " << enemies << ", live: " << live << endl;

            if (board.get_content(pos) == 0 && enemies != 0) 
            {
                board.set_content(pos, 2);
                enemies--;
            }
            
        } while (enemies != 0);
    }

    // print board in the terminal.
    void canva(Player a, Player b, ListBoard c, int level)
    {   

        for (int i = 1; i <= level; i++)
        {
            cout << "\t";

            if (a.get_position() == i && b.get_position() == i) cout << "X - X";
            else
            {
                if(a.get_position() == i) cout << a.get_name();
                else if(b.get_position() == i) cout << b.get_name();
                else if(c.get_status(i) == 1) cout << " - ";
                else cout << i;
            }
            
            if (i % 5 ==0)
            {
                cout << endl;
            }
            
        }
    }

    char CPU(int p)
    {
        char move;
        return move;
    }

    int rules_point(Player pl, ListBoard c, int level)
    {
        int pos = pl.get_position();
        int points;

        if (c.get_status(pos) == 0 && c.get_content(pos) != 1)
        {
            if (c.get_content(pos) == 0) 
            {
                points = 50;
                cout << "Zona segura. pts: " << points << endl;
            }
            else if (c.get_content(pos) == 2) // zombie place
            {
                
                c.set_content(pos, 0);
                points = -100; 
                cout << "Cuidado un Zombie!! :O pts: " << points << endl;
            }
            else if (pos == level)
            {
                points = 300; // meta
                cout << "Objetivo localizado. pts: " << points << endl;
            } 
            
            c.set_status(pos, 1);
            return points;
        }
        else 
        {
            cout << "Zona ya explorada. pts: -5 " << endl;
            return -5;
        }
        
    }

    int rules_life(Player pl, ListBoard c, int level)
    {
        int pos = pl.get_position();
        
        if (c.get_status(pos) == 0 && c.get_content(pos) == 1) 
        {
            cout << "Suerte as encontrado un botiquin." << endl;
            c.set_content(pos, 0);
            return 1;
        }
        else if (c.get_status(pos) == 0 && c.get_content(pos) == 2)
        {
            return -1;
        }
        else return 0;
    }

#pragma endregion

/* ---------------------------------------- Validations ---------------------------------------- */
#pragma region "Validation"

    // left
    bool move_a(int pos)
    {   
        
        if((pos - 1) % 5 != 0) return true;
        else return false;
        
    }

    // right
    bool move_d(int pos)
    {
        cout << "posd:" << (pos % 5) << endl;
        if(pos == 0) return true;
        else if(pos % 5 == 0 ) return false;
        else return true;
    }

    // up
    bool move_w(int pos)
    {
        if(pos >= 5) return true;
        else return false;
    }

    // down
    bool move_s(int pos, int size)
    {
        if(pos <= (size - 5)) return true;
        else return false;
        
    }
#pragma endregion
