#include <stdio.h>
#include <stdlib.h>

int validation(int m, int p);
void vuelto(int vuelto);

int main()
{
    int mc = 0, mp = 0, c= 0;
    printf("Ingrese el monto a cobrar: ");
    scanf("%d", &mc);
    printf("Ingrese el monto con el que paga: ");
    scanf("%d", &mp);

    if (validation(mc, mp) == 1)
    {
        /* Is correct */
        c = mp - mc;
        vuelto(c);
    }
    printf("end");

    return 0;
}

int validation(int m, int p)
{
    if(m > p)
    {
        printf("Monto no es suficiente para el pago a realizar.\n");
        return -1;
    }
    else
    {
        if (m < p)
        {
            printf("wait");
            return 1;
        }
        else
        {
            printf("Muchas gracias por su compra.\n");
            return 0;
        }
    }
}

void vuelto(int x)
{
    int monedas[] = {1, 5, 10, 20, 50, 100};
    int billetes[] = {500, 1000, 5000, 10000};
    int temp = x, cont = 0;

    printf("Muchas gracias por su compra su vuelto es de %dQ. Su vuelto está compuesto de la siguiente manera: \n", x);
    
    while (temp > 0)
    {
        if (temp >= 500)
        {
            /* billetes */
            for (int i = 3; i >= 0; i--)
            {
                do
                {
                    if (temp >= billetes[i])
                    {
                        temp = temp - billetes[i];
                        cont++;
                    }
                    
                    
                } while (temp >= billetes[i]);

                if(cont > 0)
                {
                    printf("%d billete(s) de %dQ\n", cont, billetes[i]);
                    cont = 0;
                }
        
            }    
        }
        else
        {
            /* monedas */
            for (int i = 5; i >= 0; i--)
            {
                do
                {
                    if (temp >= monedas[i])
                    {
                        temp = temp - monedas[i];
                        cont++;
                    }
                    
                    
                } while (temp >= monedas[i]);

                if(cont > 0)
                {
                    printf("%d monedas(s) de %dQ\n", cont, monedas[i]);
                    cont = 0;
                }
        
            } 
        }
    }
    
}