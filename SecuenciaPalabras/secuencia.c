#include "sencuencia.h"
#define esLetra(c) (((c) >= 'A' && (c) <= 'Z')|| ( (c)>='a' &&  (c)<='z' ))


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
    const char* i = pal->vPal;

    while(*i) // while(*i != '\0')
    {
        *sec->cursor= *i;
        sec->cursor++;
        i++;
    }

    return true;
}
// se agrega ese campo en cuando creo le paso ese parámetro, cuando creo la secuencia.
// Y bueno, tengo que controlar que el cursor no se pase de la dirección del último. Puedo calcular cuál es el último.La última dirección válida del vector
//. Y van a ver que el cursor no se pase de ese valor.
bool secPalEscribirCaracter(SecPal *sec,char c)
{
    *sec->cursor = c;
    sec->cursor++;

    return true;
}
bool secPalFin(const SecPal* sec)
{
    return sec->finSec;
}
void secPalCerrar(SecPal* sec)
{
    *sec->cursor= '\0';
}
