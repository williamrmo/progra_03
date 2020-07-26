#include "lista.h"

struct node *head = NULL;

void main()
{
    insertFirst("William", "Romero", "Munoz", 305070164);
    insertFirst("Liza", "Navarro", "Ulloa", 305020234);
    insertFirst("William", "Wonka", "Jimenez", 507890111);
    printList();

    search("William");
}


void insertFirst(char *name, char *lastName1, char *lastName2, int id)
{
    struct node *link = (struct node*) malloc(sizeof(struct node)); // reservar espacio en memoria
    // asignar valores
    link -> name = name;
    link -> lastName1 = lastName1;
    link -> lastName2 = lastName2;
    link -> id = id;

    // avanzar al siguiente nodo
    link -> next = head;
    head = link;
}


void printList()
{
    struct node *ptr = head; // posicionar apuntador
    printf("[");

    // recorrer la lista
    while (ptr != NULL)
    {
        printf("(%d, %s, %s)", ptr -> id, ptr -> name, ptr -> lastName1);
        ptr = ptr -> next;
    }
    printf("]\n");
}

void search(char nameS[])
{
    struct node *ptr = head; // posicionar apuntador

    while (ptr != NULL)
    {
        if (nameS == ptr -> name)
        {
            
            printf("(%d, %s, %s)\n", ptr -> id, ptr -> name, ptr -> lastName1);
        }
        ptr = ptr -> next;
    }
}