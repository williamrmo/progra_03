#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

typedef struct node
{
    char *name;
    char *lastName1;
    char *lastName2;
    int id;
    struct node *next;
    
}Persona;

Persona *listaPersonas(Persona *Lista);
Persona *insertFirst(Persona *Lista, char *name, char *lastName1, char *lastName2, int id);
Persona *printList();

#endif