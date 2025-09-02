#ifndef VECTOR_H
#define VECTOR_H

#include <stdbool.h>
#include <stdio.h>
#define TAM 15

#define TODO_OK 0
#define LLENO 1
#define DUPLICADO 2

typedef struct{
    int vec[TAM];
    size_t ce;
}Vector;

void vectorCrear(Vector* vector);
int vectorOrdInsertar(Vector* vector, int elem);
int vectorOrdBuscar(Vector* vector, int elem); //busquedabinaria


#endif // VECTOR_H
