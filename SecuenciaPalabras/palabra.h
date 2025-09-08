#ifndef PALABRA_H_INCLUDED
#define PALABRA_H_INCLUDED

#define TAM_PALABRA 30


typedef struct{
    char vPal[TAM_PALABRA +1]; // el 1 es por el caracter nulo

}Palabra;

void palabraTitulo(Palabra* pal);
void palabraToLower(Palabra* pal);
void palabraToUpper(Palabra* pal);
int palabraContarLetra(Palabra* pal);
void palabraMostrar(Palabra* pal);

#endif // PALABRA_H_INCLUDED
