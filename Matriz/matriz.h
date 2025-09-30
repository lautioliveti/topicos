#ifndef MATRIZ_H_INCLUDED
#define MATRIZ_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void** matrizCrear(int filas, int columnas, size_t tamElem);
void matrizDestruir(void** mat, int filas);

void cargarMatriz(int** m, int filas, int columnas);

void mostrarMatriz(int** m, int filas, int columnas);
int sumaDiagPrincipal(int** m, int orden);
int sumaDiagSecundaria(int** m, int orden);
int sumaTriangInfDP(int** m, int orden);
int sumaTriangSupDS(int** m, int orden);


#endif // MATRIZ_H_INCLUDED
