#include "secuencia.h"


void secPalCrear(SecPal* sec, char* cad){
    sec->cursor= cad;
    sec->finSec=false;
}

bool secPalLeer(SecPal* sec, Palabra* pal)
{
    while(*sec->cursor!='\0' && !esLetra(*sec->cursor)  )
    {
        sec->cursor++;
    }

    if(*sec->cursor == '\0')
    {
        sec->finSec=true;
        return false; //encontro nulo
    }

    char* i= pal->vPal;

    while(*sec->cursor !='\0' && esLetra(*sec->cursor))
    {
        *i=*sec->cursor;
        sec->cursor++;
        i++;
    }
    *i='\0';
    return true; // se ejecuto bien

}

bool secPalEscribir(SecPal* sec, const Palabra* pal){
    char* i = pal->vPal;
    while(*i) // while(*i != '\0')
    {
        *sec->cursor= *i;
        i++;
        sec->cursor++;
    }

}
bool secPalFin(SecPal* sec);
