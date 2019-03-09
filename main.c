#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(int argc, char *argv[]) {

    int i = 2, j = 0;

    if (argc == 2 )
    	j = atoi(argv[1]);
    else
	j = i; 
   
    printf("\n-------------Probando la función cuadrado-------------------\n");
    printf("\nEl cuadrado de %d es %d\n", j, cuadrado(&j)); 
    printf("El cuadrado de %d es %d\n", j, cuadra2(j));	


    return 0;
}
