#include <stdio.h>
#include <stdlib.h>

void menu();

int main(){
    printf("Hello World! \n");

    menu();

    printf("Aplicacon finalizada \n");
    return 0;
}

// menu function have opcions, add new numbers and get the average
void menu(){
    int exit = 0;
    char opc; // use for menu
    int cont = 0; // cont the number of values
    int temp = 0; // new value
    int nums = 0; // count all numbers
    float total = 0; // for avg

    do
    {
        printf("Elejir 'n' para agregar un nuevo valor y 's' para salir: ");
        scanf("%c", &opc);
        
        switch (opc)
        {
        case 'n':
            /* add new value */
            printf("Agregue un nuevo valor de tipo entero: ");
            scanf("%i", &temp); 
            nums = nums + temp; // save all new values
            cont = cont + 1; // times to save a new value
            
            printf("Ha introducido: %d de numeros. \n", cont);
            printf("La suma es: %d \n", nums);
            break;
        
        case 's':
            /* end app */
            printf("Salir de la app \n");
            exit = 1; // exit is true
            break;
                
        default:
        	/* error */
            printf("Error opcion no valida \n");
            break;
        }

    } while (exit == 0);
    
    total = nums / cont; // this is the average (total nums / total values)
    printf("El promedio es: %f \n", total);
}
