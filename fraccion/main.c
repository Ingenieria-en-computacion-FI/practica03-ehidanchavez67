#include <stdio.h>
#include "fraccion.h"

int main() {

    printf("Prueba de la ejecucion del TDA Fraccion\n");

    Fraccion* f1 = crearFraccion(10, 3);
    Fraccion* f2 = crearFraccion(7, 5);

    printf("Fraccion 1:\n");
    imprimir(f1);

    printf("Fraccion 2:\n");
    imprimir(f2);

    Fraccion* resultado = sumar(f1, f2);

    printf("El resultdado es:\n");
    imprimir(resultado);

    //Destruccion y liberacion de memoria
    
    destruir(f1);
    destruir(f2);
    destruir(resultado);

    return 0;
}
