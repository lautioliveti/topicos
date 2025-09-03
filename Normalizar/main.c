#include <stdio.h>
#include <stdlib.h>
#include "../SecuenciaPalabras/sencuencia.h"

#define TAM 101

char* normalizar(const char* cadOrigin, char* cadDest);
// Normalizar.exe "*(&)( ))_+cAdeNa$%^# %^a$%^ $%^noRMalIzAR!#$%@#"

int main(int argc, char* argv[])
{
    char cadNormalizada[TAM];

    normalizar(argv[1],cadNormalizada);

    puts(cadNormalizada);

    return 0;
}

char* normalizar(const char* cadOrigin, char* cadDest)
{
    SecPal secLect, secEscr;
    secPalCrear(&secLect, (char*)cadOrigin); // casteo para no mandarlo como constante
    secPalCrear(&secEscr, cadDest);

    Palabra pal;
    secPalLeer(&secLect, &pal);

    while(!secPalFin(&secLect))
    {
        palabraTitulo(&pal);
        secPalEscribir(&secEscr, &pal);
        if(secPalLeer(&secLect, &pal))
        {
            secPalEscribirCaracter(&secEscr,' ');
        }
    }
    secPalCerrar(&secEscr);
    return cadDest;
}
