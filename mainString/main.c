#include <stdio.h>
#include <stdlib.h>
#include "../miString/string.h"

int main()
{
    char str[20]="Lautaro";
    char str2[]="Oliveti";

    printf("%lld\n",mi_strlen(str));
    //printf("\n%s",mi_strcat(str,str2));
    //mi_strcpy(str,str2);
    printf("%d\n",mi_strcmp("hola","hola"));
    printf("%d\n",mi_strcmpi("hola","hola"));
    printf("%s\n",cambiarIncitu(str));
    printf("%s\n",mi_strncat(str,str2,9));
    printf("%d\n", esPalindromo("anita lava la tina"));
    printf("%d\n", esPalindromo("Ana"));                 // 1
    printf("%d\n", esPalindromo("hola"));                // 0
    printf("%d\n", esPalindromo("neuquen"));




    return 0;
}
