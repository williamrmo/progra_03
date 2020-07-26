#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;

    for (i = -15; i <= 15; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
        }
        
    }

    printf("\n");
    

    return 0;
}