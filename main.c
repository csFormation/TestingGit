#include <stdio.h>
#include <stdlib.h>
#include "function.h"
#include "function2.h"
#include "string.h"

int main(int argc, char *argv[]) {

    int i = 2, j = 0;

    if (argc == 2 )
    	j = atoi(argv[1]);
    else
	j = i; 
   
    printf("\n-------------Probando la función cuadrado-------------------\n");
    printf("\nEl cuadrado de %d es %d\n", j, cuadrado(&j)); 
    printf("El cuadrado de %d es %d\n", j, cuadra2(j));	
    printf("--------------------------------------------------------------\n");

    int len;
    char str[50];
    
    strcpy(str, "This is tutorialspoint.com");
    len = strlen(str);

    printf("Length of '%s' es %d\n", str, len);
    printf("Llamando a la función tercero de function2\n");
    tercero();
    cuarto(&len);
    printf("Function: cuarto - ahora len es %d\n", len);
    printf("Modificando la función main");

    return 0;
}
