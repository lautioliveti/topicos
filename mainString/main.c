#include <stdio.h>
#include <stdlib.h>
#include "../miString/string.h"

int main()
{
    char str[20]="Lautaro";
    char str2[]="Oliveti";

    printf("%lld",mi_strlen(str));
    printf("\n%s",mi_strcat(str,str2));
    mi_strcpy(str,str2);
    printf("\n%d",mi_strcmp("hola","hola"));
    printf("\n%d",mi_strcmpi("hola","hola"));
    printf("\n%s",mi_strncat(str,str2,9));

    printf("\n%s",str);
    return 0;
}
