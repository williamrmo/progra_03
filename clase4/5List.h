#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

struct node
{
    int data;
    int key;
    struct node *next;
    
};

void insertFirst(int key, int data);
void printList();

#endif
