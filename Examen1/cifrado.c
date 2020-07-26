/*      
        Liza Navarro & William Romero
        Mono Cifrado - Programacion 03
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LARGO 100

void process(); // read the file and start encrypting
void cifrar(char fileName[], char str[]); // encrypt the file content
void writeFile(char fileName[], char str[]); // generate a new file .enc

void main()
{
   process();
}


/* Process file */
void process()
{
    FILE * fp;
    char content[LARGO], fileName[50], fileNameExtensions[54];

    printf("Digite el nombre del archivo: ");
    scanf("%s", fileName);

    // generate a fileName with ".txt"
    strcpy( fileNameExtensions, fileName );
    strcat( fileNameExtensions, ".txt" );

    fp = fopen(fileNameExtensions, "r");

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
            printf("%s\n", content);
            // encript line
            cifrar(fileName, content);
            printf("\nPresione <Enter> para continuar \n");
            while (getchar() != '\n');
        };

        // close file
        fclose(fp);
        printf("\nArchivo abierto y cerrado de manera satisfactoria\n");
        
    }
    
}

/*  Encript content */
void cifrar(char fileName[], char str[])
{
    int longLetter = 66, key = 3;
    char letter[] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', '~', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', '~', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ' ', '.'
        };
    
    char content[LARGO];
    int n;
    char x[1];

    strcpy(content, ""); // clean values content

    for (int i = 0; i < strlen(str); i++) // for content
    {
        for (int j = 0; j < strlen(letter); j++) // for list of chars
        {
            if (letter[j] == str[i]) // if chars are the same
            {
                n = (j + 1) + key; // ( position add 1 ) + key

                if( n >= longLetter ) // if position is higher than module
                {
                    n = n - longLetter; // position substract module
                }

                x[0] = letter[ n - 1 ]; // get letter
                strncat(content, x, 1); // concat chars
                n = 0; // clean postion
            }
            
        }
        
    }

    writeFile(fileName, content);
    
    printf("%s", content);

}

/* generate a new file ".enc" */
void writeFile(char fileName[], char str[])
{
    FILE *fp;
    char fileNameExtensions[54];
    printf("\n");

    // generate a new file name
    strcpy( fileNameExtensions, fileName );
    strcat( fileNameExtensions, ".enc" );

    fp = fopen(fileNameExtensions, "a"); // append
    
    if (fp == NULL)
    {
        fputs("Error \n", stderr);
        exit(1);
    }
    else 
    {
        strcat(str, "\n");
        // write n the file
        fputs(str, fp);

        // close file
        fclose(fp);        
    }
    
}
