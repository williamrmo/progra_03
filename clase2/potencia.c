#include <stdio.h>

int potencia(int base, int exponente);

int main()
{
    int base, exponente;

    printf("Digite la base: ");
    scanf("%d", &base);

    printf("Digite el exponente: ");
    scanf("%d", &exponente);

    int result = potencia(base, exponente);

    printf("El resultado es: %d\n", result);

    return 0;
}

int potencia(int base, int exponente)
{
    int i, poten;

    poten = 1;

    for(i = 0; i < exponente; i++)
    {
        poten = poten * base; 
    }

    return poten;
}