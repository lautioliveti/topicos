#ifndef SENCUENCIA_H_INCLUDED
#define SENCUENCIA_H_INCLUDED

#include <stdbool.h>
#include "palabra.h"

typedef struct{
    char* cursor;
    bool finSec;
}SecPal;

void secPalCrear(SecPal* secPal, char* cad);
bool secPalLeer(SecPal* sec, Palabra* pal);
bool secPalEscribir(SecPal* sec, const Palabra* pal);
bool secPalFin(SecPal* sec);


#endif // SENCUENCIA_H_INCLUDED
