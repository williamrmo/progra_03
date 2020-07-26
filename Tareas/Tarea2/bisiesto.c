#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

    printf("Ingrese un anno para verificar si es bisiesto: ");
    scanf("%d", &num);

    if (num % 400 == 0)
        printf("Es bisiesto\n");
    else
        printf("No es bisiesto\n");

    return 0;
    
}