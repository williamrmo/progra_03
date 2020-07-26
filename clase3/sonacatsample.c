#include <stdio.h>
#include <string.h>

int main()
{
char str1 [100] = "Bienvenidos a ", str2[] = "Progra 3";

// para concatenar, hay que tener cuidado con el tamanno del arreglo CUIDADO, 
strcat(str1, str2);
puts(str1);
puts(str2);

return 0;
}