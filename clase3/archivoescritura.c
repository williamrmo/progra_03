#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LARGO 100
int main() 
{
    FILE *fp;
    char content[LARGO], resp[LARGO], fileName[LARGO];
    printf("\n");

    printf("Digite el nombre del archivo de salida: ");
    fgets(fileName, LARGO, stdin);

    fp = fopen(fileName, "a");

    if (fp == NULL)
    {
        fputs("Error \n", stderr);
        exit(1);
    }
    else 
    {
        do
        {
            printf("Digite el Texte: ");
            fgets(content, LARGO, stdin);
            fputs(content, fp);
            printf("Desea agregar mas lineas al archivo? s/n: ");
            fgets(resp, LARGO,stdin);
        } while (strcmp(resp, "s/n") == 0 || strcmp(resp, "s/n") == 0);
        fclose(fp);
        
    }
    return 0;
    
}
