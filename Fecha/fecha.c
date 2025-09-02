#include "fecha.h"

void ingresarFecha(Fecha* f)
{
    int d,m,a;
    puts("Ingresa una fecha (DD/MM/AAAA):");
    scanf("%d/%d/%d",&d,&m,&a);

    while(!esFechaValida(d,m,a))
    {
        puts("Fecha invalida. Ingrese la fecha ( DD/MM/AAAA):");
            scanf("%d/%d/%d",&d,&m,&a);

    }
    fechaSet(f, d, m, a);
}
bool esFechaValida(int dia, int mes,int anio)
{
    if(anio<1601)
    {
        return false;
    }
    if(mes < 1 || mes >12)
    {
        return false;
    }
    if(dia < 1 || dia > cantDiaMes(mes,anio))
    {
        return false;
    }
    return true;
}

int cantDiaMes(int mes, int anio)
{
    int diasMes[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    if(mes==2 && esBisiesto(anio))
    {
        return 29;
    }
    return diasMes[mes];
}

bool esBisiesto(int anio)
{
    return anio % 4 == 0 &&  (anio % 100 == 0 || anio % 400 ==0);
}
void fechaSet(Fecha* f, int dia, int mes, int anio)
{
    f->dia=dia;
    f->mes=mes;
    f->anio=anio;
}

Fecha fechaSumarDias (const Fecha* fecha, int dias)
{
    Fecha fSuma;
    int diasMes;

    fSuma =*fecha;
    fSuma.dia += dias;

    while(fSuma.dia > (diasMes=cantDiaMes(fSuma.mes, fSuma.anio)))
    {
        fSuma.dia-=diasMes;
        fSuma.mes++;
        if(fSuma.mes>12)
        {
            fSuma.mes=1;
            fSuma.anio++;
        }
    }
    return fSuma;
}

int fechaDiaJuliano(const Fecha* f)
{
    int cantDias=0;

    Fecha fAux= *f;

    cantDias += fAux.dia;
    fAux.mes--;

    for(int i=0;fAux.mes>0;fAux.mes--)
        cantDias += cantDiaMes(fAux.mes,fAux.anio);
    return cantDias;
}

int fechaDiaRel(const Fecha* f)
{
    long diasRel = 0;

    // Sumar días de años completos anteriores
    for (int y = 1601; y < f->anio; y++)
        diasRel += esBisiesto(y) ? 366 : 365;

    // Sumar días de meses completos del año actual
    for (int m = 1; m < f->mes; m++)
        diasRel += cantDiaMes(m, f->anio);

    // Sumar días del mes actual (restamos 1 para que 01/01/1601 sea día 0)
    diasRel += f->dia - 1;

    return diasRel;

}

int fechaDiferenciaEnDias(const Fecha* f1, const Fecha* f2)
{
    long d1 = fechaDiaRel(f1);
    long d2 = fechaDiaRel(f2);
    long dif = d2 - d1;
    if (dif < 0) dif = -dif;
    return (int)dif;
}


void fechaMostrar(const Fecha* f)
{
    printf("%d/%d/%d",f->dia,f->mes,f->anio);
}
