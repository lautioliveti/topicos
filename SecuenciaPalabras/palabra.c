#include "palabra.h"

#define aMayus(c) ((c)>='a' && (c)<='z' ? (c)-('a'-'A'): (c)) //me fijo si es minuscula. si es sumo la dif de ascii
#define aMinus(c) ((c)>='A'&& (c)<='Z' ? (c)+ ('a'-'A'):(c))

void palabraTitulo(Palabra* pal)
{
    *pal->vPal= aMayus(*pal->vPal);

    char* i = pal->vPal + 1;
    while(*i != '\0')
    {
        *i=aMinus(*i);
        i++;
    }
}
