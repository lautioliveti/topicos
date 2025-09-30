#ifndef VECTOR_H
#define VECTOR_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define CAP_INI 10
#define FACTOR_INCR 1.5
#define FACTOR_DECR 0.5
#define FACTOR_OCUP 0.25

#define TODO_OK 0
#define LLENO 1
#define DUPLICADO 2
#define ERR_SIN_MEM 3


#define BURBUJEO 1
#define SELECCION 2
#define INSERCION 3

typedef struct{
    int* vec;
    size_t ce;
    size_t  cap;
}Vector;


bool vectorCrear(Vector* vector);
int vectorOrdInsertar(Vector* vector, int elem);
int vectorOrdBuscar(Vector* vector, int elem); //busquedabinaria
bool vectorEliminarDePos(Vector* vector, int pos);
bool vectorEliminarElem(Vector* vector, int elem);
void vectorVaciar(Vector* vector);
void vectorDestruir(Vector* vector);
void vectorOrdenar(Vector* vector, int metodo);

#endif // VECTOR_H
