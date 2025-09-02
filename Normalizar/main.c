#include <stdio.h>
#include <stdlib.h>
#include "../SecuenciaPalabras/sencuencia.h"

#define TAM 101

char* normalizar(const char* cadOrig, char* cadDest);

int main()
{
    char cadNormalizada[TAM];

    normalizar(argv[1],cadNormalizada);

    puts(cadNormalizada);

    return 0;
}

char* normalizar(const char* cadOrigin, char* cadDest)
{
    SecPal secLect, secEscr;
    secPalCrear(&secLect, cadOrig);
    secPalCrear(&secEscr, cadDest);

    Palabra pal;
    secPalLeer(&secLect, &pal);

    while(!secPalFin(&secLect))
    {
        palabraATitulo(&pal);
        secPalEscribir(&secEscr, &pal);
        secPalEscribirCaracter(&secEscr,' ');
        secPalLeer(&secLect);
    }
    secPalCerrar(&secEscr);
    return cadDest;
}