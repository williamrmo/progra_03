#include <stdio.h>
#include <string.h>


int main()
{
    char str1[] = "hola", str2[] = "hoLa", str3[] = "hola";

    int result; 
    /* 0 los 3 str son iguales
        entero negativo segun la pos en ASCII
        entero positivo segun la pos en ASCII

    */
    result = strcmp(str1, str2);

    //printf("El resultado de la comparacion es: %d", result);

    if(result == 0)
    {
        printf("Son iguales");
    } 
    else 
    {
        printf("Son diferentes");
    }
    return 0;
}