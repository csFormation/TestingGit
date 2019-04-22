#include <stdio.h>

#define VAR 21

void tercero() { 
    int i = 9;
    char c = 'A';
    
    (void) i;
    (void) c;
    
    printf( "Hola desde la función 'tercero'\n");
    printf( "Añadiendo nuevos mensajes a la función 'tercero'\n" );
	
}

void cuarto( int *num ) {
	printf( "Valor recibido es %d\n", *num );
	
	*num = *num + 1;	
	printf( "Estoy modificando cositas...\n");
	printf( "Probando rebase\n");
}	
