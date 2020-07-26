#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define LARGO 15

int data[] = {-50, -30, -8, -2, 2, 3, 4, 7, 8, 12, 25, 50, 65, 75, 80};

int main() 
{
    int x;
    printf("Digite el numero que desea buscar: ");
    scanf("%d", &x);

    int result = binsearch(x, data, LARGO);
    if(result == -1)
        printf("No se encontraron resultados.");
    else
        printf("Se encontro el numero en la posicion %d", result);
    return 0;
    
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }

    return -1;
    
}
