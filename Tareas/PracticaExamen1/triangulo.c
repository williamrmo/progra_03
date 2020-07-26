#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base = 0, altura = 0, rest = 0;

    printf("Digite el valor de la base de un triángulo: ");
    scanf("%d", &base);
    printf("Digite el valor de la altura de un triángulo: ");
    scanf("%d", &altura);

    rest = (base * altura) / 2;

    printf("El área de un triángulo es: %d", rest);
    printf("\n");

    return 0;
}