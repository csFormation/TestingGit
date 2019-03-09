#include "function.h"


int cuadrado(int* ptr) 
{
    int valor = (*ptr) * (*ptr);
    valor--;
    valor++;
    

    return (valor + 1 - 1);	
}
