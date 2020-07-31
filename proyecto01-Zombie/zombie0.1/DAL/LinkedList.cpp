#include "LinkedList.hpp"


Node::~Node()
{
}

void Node::print_node(int player_1, int player_2)
{
    if (id == player_1)
    {
        cout << "j1" << endl;
    }
    else if (id == player_2)
    {
        cout << "j2" << endl;
    }
    
    else
    {
        cout << id << endl;
    }
    

}

void Node::show(int player_1, int player_2)
{
    if (next == NULL)
    { 
        print_node(player_1, player_2);
    }
    else
    {
        print_node(player_1, player_2);
        next -> show(player_1, player_2);
    }
    
}



/* -------------------------------------------------- */

ListBoard::~ListBoard()
{
}

bool ListBoard::empty()
{
    if(header == NULL) return true;
    else return false;
    
}

void ListBoard::insert_at_begin(int set_id, int set_status, int set_content)
{
    Node *new_node = new Node(set_id, set_status, set_content);
    new_node -> next = this -> header;
    this -> header = new_node;
}

void ListBoard::push(int set_id, int set_status, int set_content)
{
   if (header ==NULL)
   {
       insert_at_begin(set_id, set_status, set_content);
       return;
   }
   else
   {
       Node *new_node = new Node(set_id, set_status, set_content);
       Node *ptr = this -> header;

       while (ptr -> next )
       {
           ptr = ptr -> next;
       }

       ptr -> next = new_node;
       
   }
   
    
}

void ListBoard::print(int player_1, int player_2)
{
    header -> show(player_1, player_2);
}