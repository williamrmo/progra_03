#include <string>

// #define NULL 0

using namespace std;

class Nodo_Board
{

private:

    int id;
    int status;     // show content : Active : 1 / Inactive : 0
    int content;    // kind of content : empty : 0 / extra life : 1 / zombie : 2 / player : 3
    int up;         // up move alternative : don't move alternative : 0
    int left;       // left move alternative : don't move alternative : 0
    int rigth;      // rigth move alternative : don't move alternative : 0
    int dowm;       // dowm move alternative : don't move alternative : 0
    Nodo_Board *next;

public:
    //Board *next;
    Nodo_Board(int id, int status/*, int content, int up, int left, int rigth, int dowm*/);

    void imprimir();
    void mostrar();
    /*
    int get_id();
    int get_statues(int id);
    int get_content(int id);
    int get_up(int id);
    int get_left(int id);
    int get_right(int id);
    int get_dowm(int id);
    */
};


class ListBoard
{

public:
    Nodo_Board head;
    ListBoard();
    void push(int id, int status);
    void mostrar1();
    bool estavacio();
};