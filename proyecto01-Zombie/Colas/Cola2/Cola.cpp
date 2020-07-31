#include <iostream>
#include <string>

using namespace std;


class Node
{
private:
    Node *prev;
    Node *next;
    string data;

    friend class Queue;

};


/* ----------------------------------------------------- */
class Queue
{
private:
    Node *header;
    Node *trailer;
    int tam;
    int tamMAx;
public:
  
    Queue(int tm);
    ~Queue();

    const string &front();
    void enqueue(const string & dt);
    void dequeue();
    bool empty() const;
    int size() const;
};

Queue::Queue(int tm = 100)
{
    header = new Node;
    trailer = new Node;

    header -> next = trailer;
    trailer -> prev = header;

    header -> prev = NULL;
    trailer -> next = NULL;

    tam = 0; // size actual 0
    tamMAx = tm; // max size tm;
}

Queue::~Queue()
{
    while (!empty())
    {
        dequeue();
    }

    delete header;
    delete trailer;    
}

const string & Queue::front()
{
    return header -> next -> data;
}

void Queue::enqueue(const string & dt)
{
    if(tam < tamMAx)
    {
        Node *nd = new Node;

        nd -> data = dt;
        nd -> next = trailer;
        nd -> prev = trailer -> prev;


        trailer -> prev -> next = nd;
        trailer -> prev = nd;
        tam++;
    }
}

// delete front
void Queue::dequeue()
{
    if(!empty())
    {
        Node *nd = header -> next -> next;

        delete header -> next;
        header -> next = nd;
        nd -> prev = header;

        tam--;
    }
}

// esta vacio
bool Queue::empty() const
{
    if (tam == 0) return true;
    else return false;
    
}

int Queue::size() const
{
    return tam;
}

/* ----------------------------------------------------------- */

int main()
{

    Queue q(5);

    q.enqueue("William");
    q.enqueue("Valentina");
    q.enqueue("Ana");
    q.enqueue("Juan");
    q.enqueue("Alejandro");
    q.dequeue();
    
    cout << q.front() << endl;

    return 0;
}