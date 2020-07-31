#include <iostream>
#include <string>

using namespace std;

class Node
{
private:
    int id;
    int status;     // show content : Active : 1 / Inactive : 0
    int content;    // kind of content : empty : 0 / extra life : 1 / zombie : 2 / player : 3
    Node *next;

    friend class ListBoard;

public:
    Node(int set_id, int set_status, int set_content):id(set_id), status(set_status), content(set_content), next(NULL){};
    ~Node();
    void print_node(int player_1, int player_2);
    void show(int player_1, int player_2);
    int get_status();
    int get_content();
    void set_status();
    void set_content();
};



/* -------------------------------------------------- */



class ListBoard
{
private:
    Node *header;
public:
    ListBoard():header(NULL){};
    ~ListBoard();
    bool empty();
    void push(int set_id, int set_status, int set_content);
    void insert_at_begin(int set_id, int set_status, int set_content);
    void print(int player_1, int player_2);
};
