#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "Programa";
    char b[20] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', 'a', '\0'};

    printf("Largo del string a = %zu \n", strlen(a)); // zu = size_t
    printf("Largo del string a = %zu \n", strlen(b));
    return 0;
}