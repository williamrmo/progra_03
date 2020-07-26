#include "lista2.h"

//struct node *head = NULL;

void main()
{
    Persona *Lista = listaPersonas(Lista);
    Lista = insertFirst(Lista, "William", "Romero", "Munoz", 305070164);
    printf("%s\n", Lista ->lastName1);
}

Persona *listaPersonas(Persona *Lista)
{
    Lista = NULL;
    return Lista;
}

Persona *insertFirst(Persona *Lista, char *name, char *lastName1, char *lastName2, int id)
{
    Persona *newPerson;
    newPerson = (Persona*) malloc(sizeof(Persona));

    newPerson -> name = name;
    newPerson -> lastName1 = lastName1;
    newPerson -> lastName2 = lastName2;
    newPerson -> id = id;
    newPerson -> next = NULL;

    if (Lista == NULL)
    {
        /* code */
        Lista == newPerson;
    }
    
    return Lista;
}

Persona *printList()
{
    struct node *ptr = NULL;
    printf("[");
    while (ptr != NULL)
    {
        printf("(%s)", /* ptr -> id, */ptr -> name);
        ptr = ptr -> next;
    }
    printf("]\n");
}