#include "LinkedList.hpp"

/* ---------------------------------------- Node ---------------------------------------- */
#pragma region "Node"

    Node::~Node()
    {
    }

    void Node::print_node(int player_1, int player_2)
    {

        cout << "\t";
        
        if (id % 5 == 0)
        {
            // id, status, content
            cout << id << ", " << status << ", " << content << endl;
        }
        else
        {
            cout << id << ", " << status << ", " << content << " ";
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

#pragma endregion


/* ---------------------------------------- ListBoard ---------------------------------------- */
#pragma region "ListBoard"

    ListBoard::~ListBoard()
    {
    }

    bool ListBoard::empty()
    {
        if(header == NULL) return true;
        else return false;
        
    }

    void ListBoard::insert_at_begin(int set_id, int set_content)
    {
        Node *new_node = new Node(set_id, set_content);
        new_node -> next = this -> header;
        this -> header = new_node;
    }

    void ListBoard::push(int set_id, int set_content)
    {
    if (header ==NULL)
    {
        insert_at_begin(set_id, set_content);
        return;
    }
    else
    {
        Node *new_node = new Node(set_id, set_content);
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

    // status
    int ListBoard::get_status(int id)
    {
        Node *ptr = header;
        bool found = false;
        int n;

        while(ptr != NULL)
        {   
            
            if(ptr -> id == id)
            {
                n = ptr -> status;
                found = true;
            }
            
            ptr = ptr -> next;
        }

        if(found == false) return -1;
        else return n;

    }

    void ListBoard::set_status(int id, int value)
    {   
        Node *ptr = this -> header;

        while(ptr != NULL)
        {   
            
            if(ptr -> id == id)
            {
                ptr -> status = value;
                
            }
            
            ptr = ptr -> next;
        }
    }

    // content
    int ListBoard::get_content(int id)
    {
        Node *ptr = header;
        bool found = false;
        int n;

        while(ptr != NULL)
        {   
            if(ptr -> id == id)
            {
                n = ptr -> content;
                found = true;
            }
            
            ptr = ptr -> next;
        }

        if(found == false) return -1;
        else return n;
    }

    void ListBoard::set_content(int id, int value)
    {
        Node *ptr = this -> header;

        while(ptr != NULL)
        {   
            
            if(ptr -> id == id)
            {
                ptr -> content = value;
                
            }
            
            ptr = ptr -> next;
        }
    }

#pragma endregion