#include <stdlib.h>
#include <stdio.h>


int main()
{
    int data[] = {15, 7, 17, 5, 12, 21, 8, 4, 6, 31, 22, 40, 32, 10, 45, 1, 24, 28, 30, 20};
    int num = 0, pos = -1;
    int dimA = 0, dimB = 0, dimC = 0;

    dimA = sizeof(data); // length Vector
    dimB = sizeof(data[0]); // length first value in the Vector
    dimC = dimA / dimB; // result dimendion of the vector

    printf("Ingrese el numero a buscar: ");
    scanf("%d", &num);

    for (int i = 0; i < dimC; i++)
    {
        if(num == data[i])
        {
            pos = i;
            printf("%d \n", i);
        }
        
    }

    if(pos != -1)
    {
        printf("El valor se encuentra en la posición: %d", pos);
    }
    else
    {
        printf("-1: no se encuentra el valor solicitado.");
    }

    printf("\n");

    return 0;
}
