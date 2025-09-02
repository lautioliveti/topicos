#include "vector.h"
#include <stdbool.h>

void vectorCrear(Vector* vector)
{
    vector->ce=0;
}

int vectorOrdInsertar(Vector* vector, int elem)
{
    if( vector->ce == TAM )
    {
        return LLENO;
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