#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(int argc, char *argv[]) {

    int i = 2;

    int j = atoi(argv[1]);

    printf("\n-------------Probando la función cuadrado-------------------\n");
    printf("\nEl cuadrado de %d es %d\n", j, cuadrado(&j)); 
    
    return 0;
}
