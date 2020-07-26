#include <stdio.h>
#include <stdlib.h>

int validation(int end, int start);
void get_numbers(int end, int start);

int main() 
{
    int num_a, num_b;
    num_a = 0; // end
    num_b = 0; // start

    printf("Ingrese un numero de iniciacion, mayor a '0': ");
    scanf("%d", &num_a);
    printf("Ingrese un numero de finalizacion, menor a '0': ");
    scanf("%d", &num_b);

    if (validation(num_a, num_b) == 0)
    {
        /* ERROR */
        printf("ERROR: El primer número debe ser mayor que cero y el segundo menor que cero.\n");
    } else {
        get_numbers(num_a, num_b);
    }
    
    return 0;
}

// validation
int validation(int end, int start)
{
    int is_true = 0; // false = 0 / true = 1

    if (end > 0)
    {
        if (start < 0)
        {
            /* The numbers are corrects */
            is_true = 1;
        }
        
    } 

    return is_true;
}

// discover numbers
void get_numbers(int end, int start)
{
    int i;

    for (i = start; i <= end; i++)
    {
        printf("%d ", i);
    }

    printf("\n");
    
}