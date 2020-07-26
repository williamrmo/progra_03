#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

struct node
{
    char *name;
    char *lastName1;
    char *lastName2;
    int id;
    struct node *next;
    
};

void insertFirst(char *name, char *lastName1, char *lastName2, int id);
void printList();
void search(char nameS[]);


#endif