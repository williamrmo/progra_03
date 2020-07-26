#include "5List.h"

struct node *head = NULL;

void main()
{
    insertFirst(1, 10);
    insertFirst(2, 14);
    insertFirst(3, 4);
    insertFirst(4, 5);
    insertFirst(5, 35);
    insertFirst(6, 5);
    printList();
}

void insertFirst(int key, int data)
{
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link -> data = data;
    link -> key = key;

    link -> next = head;
    head = link;
}

void printList()
{
    struct node *ptr = head;
    printf("[");
    while (ptr != NULL)
    {
        printf("(%d, %d)", ptr -> key, ptr -> data);
        ptr = ptr -> next;
    }
    printf("]\n");
}