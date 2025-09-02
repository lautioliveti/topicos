#ifndef PALABRA_H_INCLUDED
#define PALABRA_H_INCLUDED

#define TAM_PALABRA 30

typedef struct{
    char vPal[TAM_PALABRA +1]; // el 1 es por el caracter nulo
    
}Palabra;

void palabraTitulo(Palabra* pal);

#endif // PALABRA_H_INCLUDED
