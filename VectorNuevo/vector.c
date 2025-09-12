#include "vector.h"
#include <stdbool.h>

bool redimensionarVector(Vector* vector, float factor);

bool vectorCrear(Vector* vector)
{
    vector->ce=0;
    vector->cap=CAP_INI;

    vector->vec=malloc(CAP_INI * sizeof(int));

    return vector->vec!=NULL; // devolve el punt nuevo si es distinto de null
}

int vectorOrdInsertar(Vector* vector, int elem)
{
    if( vector->ce == vector->cap)
    {
        if(!redimensionarVector(vector, FACTOR_INCR))
        {
            return ERR_SIN_MEM;
        }
    }

    int* i=vector->vec;
    int* ult= vector->vec + (vector->ce - 1); //aritmetica de punteros

    while (i <= ult && elem > *i) //mienstras q el iterador sea menor o igual al puntero final y el elemento sea menor a cont(i)
    {
        i++; //aumento de posiciones
    }

    if( i<=ult && *i == elem )
    {
        return DUPLICADO;
    }

    for(int* j=ult; i<=j; j--)
    {
        *(j+1)=*j;
    }

    *i=elem;
    vector->ce++;

    return TODO_OK;

}

int vectorOrdBuscar(Vector* vector, int elem)
{
    int* ls = vector->vec + (vector->ce -1);
    int* li = vector->vec;
    int* m;
    int comp;
    bool encontro= false;
    int pos=-1; // en caso de que no encuentre devolvemos -1 (posicion no existente)

    while(!encontro && li <= ls)
    {

        m = li + (ls - li) / 2;

        comp = elem - *m;

        if(comp == 0)
        {
            encontro = true;
            pos = m - vector->vec; // devuelve la pos en forma de indice
        }

        if(comp < 0)
        {
            ls = m - 1;
        }

        if(comp > 0)
        {
            li = m + 1;
        }
    }
    return pos;


}

bool vectorEliminarDePos(Vector* vector, int pos)
{
    if(pos <0 || pos >= vector->ce)
    {
        return false;
    }

    int* ult = vector->vec +(vector->ce - 1);

    for(int* i = vector->vec+pos+1; i<=ult;i++)
    {
        *(i-1) = *i;
    }
    vector->ce --;

    if((float)vector->ce / vector->cap <= FACTOR_OCUP)
    {
        redimensionarVector(vector, FACTOR_DECR); // si se esta ocupando menos o igual del 25% del vector, lo decremento
    }
    return true;

}

bool vectorEliminarElem(Vector* vector, int elem)
{
    int pos = vectorOrdBuscar(vector, elem);

    if(pos == -1)
    {
        return false;
    }

    vectorEliminarDePos(vector, pos);

    return true;
}

void vectorVaciar(Vector* vector)
{
    vector->ce = 0;
    vector->cap = CAP_INI;
    vector->vec = realloc(vector->vec, CAP_INI * sizeof(int));
}

void vectorDestruir(Vector* vector)
{
    vector->cap = 0;
    vector->ce = 0;
    free(vector->vec);
    vector->vec = NULL;
}


bool redimensionarVector(Vector* vector, float factor)
{
    size_t nuevaCap = vector->cap * factor;

    if(nuevaCap < CAP_INI)
    {
        return true;
    }

    int* nuevoVec = realloc(vector->vec, nuevaCap * sizeof(int));

    if(!nuevoVec)
    {
        return false;
    }

    printf("Redimensión de %lld a %lld\n", vector->cap, nuevaCap);

    vector->cap = nuevaCap;
    vector->vec = nuevoVec;

    return true;
}

