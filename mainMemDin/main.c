#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "../VectorNuevo/vector.h"


int main()
{
    SetConsoleOutputCP(CP_UTF8);

    Vector vector;
    vectorCrear(&vector);

    vectorOrdInsertar(&vector, 5);
    vectorOrdInsertar(&vector, 7);
    vectorOrdInsertar(&vector, 1);
    vectorOrdInsertar(&vector, 9);
    vectorOrdInsertar(&vector, 3);
    vectorOrdInsertar(&vector, 15);
    vectorOrdInsertar(&vector, 17);
    vectorOrdInsertar(&vector, 11);
    vectorOrdInsertar(&vector, 19);
    vectorOrdInsertar(&vector, 13);
    vectorOrdInsertar(&vector, 20);
    vectorOrdInsertar(&vector, 115);
    vectorOrdInsertar(&vector, 117);
    vectorOrdInsertar(&vector, 111);
    vectorOrdInsertar(&vector, 119);
    vectorOrdInsertar(&vector, 113);
    vectorOrdInsertar(&vector, 1115);
    vectorOrdInsertar(&vector, 1117);
    vectorOrdInsertar(&vector, 1111);
    vectorOrdInsertar(&vector, 1119);
    vectorOrdInsertar(&vector, 1113);
    vectorOrdInsertar(&vector, 1120);

    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);
    vectorEliminarDePos(&vector, 0);

    vectorDestruir(&vector);

    return 0;
}
