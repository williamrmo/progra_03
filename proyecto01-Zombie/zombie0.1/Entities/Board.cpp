#include <iostream>
#include "Board.hpp"


Nodo_Board::Nodo_Board(int new_id, int new_status/*, int content, int up, int left, int rigth, int dowm*/)
{
    id = new_id;
    status = new_status;
    next = NULL;
}

void Nodo_Board::imprimir()
{
    cout << id << ", " << status << endl;
}

void Nodo_Board::mostrar()
{
    if(next == NULL) imprimir();
    else
    {
        imprimir();
        next.mostrar();
    }
}

/*      Lista Board      */
ListBoard::ListBoard()
{
    head = NULL;
}

bool ListBoard::estavacio()
{
	if (head == NULL)
		return true;
	else
		return false;
}

void ListBoard::push(int id, int status)
{
    Nodo_Board *Mi_Board = new Nodo_Board(id, status);

    if(estavacio())
	{
		head = Mi_Board;
	}
	else
	{
		Mi_Board.next -> head;
		head = head.next;

	}
}

void ListBoard::mostrar1()
{
    head.mostrar();
}
/*
int Board::get_id()
{

}

int Board::get_statues(int id)
{

}

int Board::get_content(int id)
{

}

int Board::get_up(int id)
{

}

int Board::get_left(int id)
{

}

int Board::get_right(int id)
{

}
int Board::get_dowm(int id)
{

}

*/