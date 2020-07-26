// Suamtoria de n cantidad de numeros
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i , *ptr, sum = 0;
    printf("Ingrese el numero de el elemento: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        /* code */
        printf("Error! Memoria no reservada.");
        exit(0);
    }

    printf("Ingrese los elementos: ");
    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    
    printf("Sumatoria = %d\n", sum);
    free(ptr);

    return 0;
    
}