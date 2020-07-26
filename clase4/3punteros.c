#include <stdio.h>

int main()
{
    int i, x[6], sum = 0;

    printf("Ingrese 6 numeros: ");

    for (i = 0; i < 6; i++)
    {
        // Equivale a scnf("%d", &x[i]);
        scanf("%d", x + i);

        // Equivale a sum += x[i]
        sum += *(x + i);
    }

    printf("Sumatoria = %d\n", sum);
    return 0;
    
}