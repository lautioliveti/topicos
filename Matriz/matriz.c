#include "matriz.h"
#define SIN_MEM 0

void** matrizCrear(int filas, int columnas, size_t tamElem)
{
    void ** mat = malloc (filas * sizeof(void**));
    if( !mat)
    {
        return SIN_MEM;
    }

    void ** ult = mat + (filas -1);

    for(void** i = mat ; i < ult ; i++)
    {
        i =malloc(columnas*tamElem);
        if(!i)
        {
            matrizDestruir(mat , i-mat);
            return SIN_MEM;
        }
    }
    return mat;
}

void matrizDestruir(void** mat, int filas)
{
    void** ult = mat + (filas - 1);

    for(void ** i = mat; i <=ult; i++)
    {
        free(*i);
    }

}


void cargarMatriz(int** m, int filas, int columnas)
{
    int valor = 1;

    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < columnas; j++)
        {
            m[i][j] = valor++;
        }
    }
}


void mostrarMatriz(int** m, int filas, int columnas)
{
    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < columnas; j++)
        {
            printf("[%02d]", m[i][j]);
        }

        putchar('\n');
    }
}


int sumaDiagPrincipal(int** m, int orden)
{
    int acum = 0;

    for(int i = 0; i < orden; i++)
    {
        acum += m[i][i];
    }

    return acum;
}


int sumaDiagSecundaria(int** m, int orden)
{
    int acum = 0;

    for(int i = 0, j = orden - 1; i < orden; i++, j--)
    {
        acum += m[i][j];
    }

    return acum;
}


int sumaTriangInfDP(int** m, int orden)
{
    int acum = 0;

    for(int i = 1, limJ = 0; i < orden; i++, limJ++)
    {
        for(int j = 0; j <= limJ; j++)
        {
            acum += m[i][j];
        }
    }

    return acum;
}


int sumaTriangSupDS(int** m, int orden)
{
    int acum = 0;
    int limI = orden - 2;
    for(int i = 0, limJ = limI; i <= limI; i++, limJ--)
    {
        for(int j = 0; j <= limJ; j++)
        {
            acum += m[i][j];
        }
    }

    return acum;
}
