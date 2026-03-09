#include "pelicula1.h"

int main(){

    Pelicula *p;

// Crear la pelicula
    p = crearPelicula("Eterno resplandor de una mente sin recuerdos","Romance",2004);

// Agregar Directores
    agregarDirector(p,"Michel Gondry");

//Imprimir la pelicula
    printf("===Datos de la pelicula===\n");
    imprimir(p);

//Cambiar genero

    cambiarGenero(p,"Ciencia Ficcion");

// Imprimir nuevos datos
    printf("\nDespues de cambiar el genero:\n");
    imprimir(p);

//Destruir a la pelicula y liberar memoria :(
    destruir(p);

    return 0;
}
