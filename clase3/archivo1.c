#include <stdio.h>
#include <stdlib.h>

// constante
#define LARGO 100

int main()
{
    FILE * fp;
    char content[LARGO];

    fp = fopen("texto.txt", "r");
    /*
        Ruta relativa archivo de la misma carpeta / Ruta absoluta en cualquier parte del sistema
        "r" = read
        "w" = write
        "a" = add
        *** Hay mas
    */
    if(fp == NULL)
    {
        fputs("Error: no se pudo leer el archivo \n", stderr);
        exit(1);
    }
    else
    {
        printf("Extrayendo el contenido del archivo linea por linea, en cada pausa presione la tecla <enter>\n");
        while (fgets(content, LARGO, fp) != NULL)
        {
            /* code */
            printf("%s", content);
            printf("Presione <Enter> para continuar \n");
            while (getchar() != '\n');
        };
        fclose(fp);
        printf("Archivo abierto y cerrado de manera satisfactoria\n");
        
    }
    return 0;
}
