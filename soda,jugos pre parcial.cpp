//programa hecho por Andres Isai Vasquez Vasquez
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <windows.h>

void c();

int main()
{
    int n;
	int opcion;

    do{
    		
    	printf( "\n          PROGRAMA QUE CALCULA LA PRODUCCION DIARIA Y ");
    	printf( "\n         LOS INSUMOS PARA LA ELABORACION DE SODA Y JUGO. \n");
    	printf( "\n ====================================================================");
        printf( "\n =  1. Calcular produccion diaria de soda y sus insumos requeridos. =", 163 );
        printf( "\n =  2. Calcular produccion diaria de jugo y sus insumos requeridos. =", 163 );
        printf( "\n =  3. Salir.                                                       =" );
        printf( "\n ====================================================================");
        printf( "\n\n   Introduzca opci%cn (1-3): ", 162 );

        scanf( "%d", &opcion );
		c();
		
        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1:	printf( "\n   Introduzca un n%cmero entero: ", 163 );
                    scanf( "%d", &n );
                    printf( "\n   Insumo requerido de azucar para %d botella/s de soda es de %d g\n ", n, n * 800  );
                    printf( "\n   Insumo requerido de agua para %d botella/s de soda es de %d ml\n\n ", n, n * 500  );
                    break;
					
            case 2: printf( "\n   Introduzca un n%cmero entero: ", 163 );
                    scanf( "%d", &n );
                    printf( "\n   Insumo requerido de azucar para %d botella/s de jugo es de %d g\n ", n, n * 700  );
                    printf( "\n   Insumo requerido de agua para %d botella/s de jugo es de %d ml\n\n ", n, n * 600  );

         }

         /* Fin del anidamiento */

    } while ( opcion != 3 );
	
    return 0;
}

void c(){
	system("cls");
}
