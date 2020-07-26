#include <stdio.h>

int main()
{
    char name[] = "Harry Potter";
    printf("%c", *name); //* es un puntero
    printf("%c", *(name + 1));

    char * namePtr;
    namePtr = name;

    printf("%c", * namePtr);
    printf("%c", *(namePtr + 1));

    printf("\n");

    return 0;
}