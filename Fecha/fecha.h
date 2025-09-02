#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

#include <stdbool.h>
#include <stdio.h>


typedef struct
{
    int dia;
    int mes;
    int anio;
}Fecha;

void ingresarFecha(Fecha* f);
bool esFechaValida(int dia, int mes,int anio);
void fechaSet(Fecha* f, int dia, int mes, int anio);
int cantDiaMes(int mes, int anio);
bool esBisiesto(int anio);
Fecha fechaSumarDias (const Fecha* fecha, int dias);
void fechaMostrar(const Fecha* f);
int fechaDiaJuliano(const Fecha* f);
int fechaDiaRel(const Fecha* f);
int fechaDiferenciaEnDias(const Fecha* f1, const Fecha* f2);


#endif
