#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LARGO 100

int main()
{
    int i, cantidad;
    cantidad = 0;
    char text [LARGO];

    printf("Digite el texto: ");
    // stdio estandar de entrada de datos es el teclado
    // salida estandar es el monitor

    fgets(text, LARGO, stdin);/// el tercer valor es un apuntador, este apunta al teclado

    printf("\n");

    for(i = 0; i < strlen(text); i++)
    {
        switch (text[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cantidad++;
                break;
        }
    }

    printf("La cantidad de vocales en el texto es: %d \n", cantidad);
    return 0;
}