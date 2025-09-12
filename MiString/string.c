#include "string.h"

size_t mi_strlen(const char* str)
{
    size_t cant =0;
    char* i= (char*)str;
    while(*i)
    {
        cant++;
        i++;
    }
    return cant;
}

char* mi_strcat(char* str, const char* str2)
{
    char* p2= (char*)str2;
    char* p1= str;
    while(*p1)
    {
        p1++;
    }
    *p1 =' ';
    p1++;
    while(*p2)
    {
        *p1=*p2;
        p1++;
        p2++;
    }
    *p1='\0';
    return str;
}

void mi_strcpy(char* str, const char* str2)
{
    char* i1= str;
    char* i2= (char*) str2;

    while (*i2)
    {
        *i1=*i2;
        i1++;
        i2++;
    }
    *i1='\0';
}

int mi_strcmp(const char* str, const char* str2)
{
    int aux;
    char* p1=(char*)str;
    char* p2=(char*)str2;
    while (*p1=='\0' && *p1==*p2)
    {
        p1++;
        p2++;
    }
    aux=*p1-*p2;
    return aux;
}

int mi_strcmpi(const char* str,const char* str2)
{
    int aux;
    char* p1=(char*)str;
    char* p2=(char*)str2;
    aux=aMayus(*p1)-aMayus(*p2);
    while (*p1=='\0' && aux==0)
    {
        p1++;
        p2++;
        aux=aMayus(*p1)-aMayus(*p2);
    }
    return aux;
}

char* mi_strncat (char* str, const char* str2,int n)
{
    char* p1 =str;
    char* p2= (char*)str2;
    if(n<0)
    {
        return str;
    }
    while(*p1)
    {
        p1++;
    }

    while(n>0&& *p2)
    {
        *p1=*p2;
        p1++;
        p2++;
        n--;
    }
    *p1='\0';
    return str;

}
