#include <stdio.h>
#include <stdlib.h>


int main (){

    printf("Hola Mundo :)");

    int num = 7, *pnum ;
    pnum = &num;

    printf("\nDirección de memoria almacenada por el puntero: %d", pnum);
    printf("\nDirección de memoria de la variable: %d", &num);
    printf("\nDirección de memoria del puntero: %d", &pnum);
    printf("\nTamaño de memoria utilizado por esa variable usando la funcion: %d", sizeof(int));
    printf("\nContenido del puntero: %d", *pnum);
    return 0;

}
