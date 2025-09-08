#include <stdio.h>
#include <stdlib.h>
#include "../SecuenciaPalabras/sencuencia.h"

#define TAM 101

char* normalizar(const char* cadOrigin, char* cadDest);
// Normalizar.exe "*(&)( ))_+cAdeNa$%^# %^a$%^ $%^noRMalIzAR!#$%@#"
int contarPalabras(const char* cadOrigin);

int main(int argc, char* argv[])
{
    char cadNormalizada[TAM];


    normalizar(argv[1],cadNormalizada);

    puts(cadNormalizada);

    printf("%d",contarPalabras(cadNormalizada));

    palabraMostrar(&palabraMasLarga(cadNormalizada));

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
// contar la cantidad de palabras q hay en una cadena.
// La palabra mas larga
// hacer las funciones de string.h

Palabra palabraMasLarga(const char* cadOrigin)
{
    SecPal secLect;
    secPalCrear(&secLect, (char*)cadOrigin);

    Palabra pal, palMasLarga;
    secPalLeer(&secLect, &pal);

    int cantLetra, cantLetraMasGrande=0;

     while(!secPalFin(&secLect))
    {
        cantLetra=palabraContarLetra(&pal);
        if(cantLetra>cantLetraMasGrande)
        {
            palMasLarga=pal;
            cantLetraMasGrande=cantLetra;
        }
         secPalLeer(&secLect, &pal);
    }

    return palMasLarga; 

}

int contarPalabras(const char* cadOrigin)
{
    SecPal secLect;
    secPalCrear(&secLect, (char*)cadOrigin);

    Palabra pal;
    int contPalabras=0;
    secPalLeer(&secLect, &pal);

    while(!secPalFin(&secLect))
    {
        contPalabras++;
        secPalLeer(&secLect,&pal);

    }
    return contPalabras;
}
