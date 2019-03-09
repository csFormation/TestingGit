#include <stdio.h>
#include "function.h"

int main(void) {

    int i = 2;		
    printf("\n-------------Probando la función cuadrado-------------------\n");
    printf("\nEl cuadrado de %d es %d\n", i, cuadrado(&i)); 
    
    return 0;
}
