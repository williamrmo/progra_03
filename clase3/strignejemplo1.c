#include <stdio.h>

void displayString(char str[]);

char name1[20];
char name2[30];
char str[50];

int main()
{
    printf("Ingrese un nombre: ");
    scanf("%s", name1); // lee datos hasta encontrar un espacio en blanco, el resto lo guarda en el buffer
    printf("Su nombre es %s\n", name1);

    while ((getchar()) != '\n'); // limpiar el buffer
    

    printf("Ingrese un nombre: ");
    fgets(name2, sizeof(name2), stdin); // lee hasta que encuentre un <enter>
    puts(name2);

    printf("Ingrese un text: ");
    fgets(str, sizeof(str), stdin); // lee hasta que encuentre un <enter>
    displayString(str);

    printf("\n");

    return 0;
}

void displayString(char str[])
{
    printf("Salida: ");
    puts(str);
}