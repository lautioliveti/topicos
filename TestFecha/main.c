#include <stdio.h>
#include <stdlib.h>
#include "../Fecha/fecha.h"
int main()
{
    Fecha fechax;
    Fecha fechay={19,10,2025};
    
    ingresarFecha(&fechax);
    printf("%d",fechaDiferenciaEnDias(&fechay,&fechax));

    return 0;
}
