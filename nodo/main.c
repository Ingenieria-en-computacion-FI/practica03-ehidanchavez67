#include <stdio.h>
#include "nodo.h"

int main()
{
    printf("Prueba del TAD Nodo\n");
    nodo* nodoT = crearNodo[10];

    if(nodoT !== NULL) {
        printf("Valor inicial: %d\n", obtenerValor(nodoT));

    asignarValor(nodoT, 25);
    printf("Nuevo valor: %d\n", obtenerValor(nodoT));

    destruirNodo(nonoT);
    
    }
    return 0;
}
