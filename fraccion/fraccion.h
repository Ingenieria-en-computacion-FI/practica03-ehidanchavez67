#ifndef FRACCION_H
#define FRACCION_H

struct fraccion {
    int num;
    int den;
};

typedef struct fraccion Fraccion;

// Crear una fraccion
Fraccion* crearFraccion(int num, int den);

// Simplificar una fraccion
void simplificar(Fraccion* f);

//Sumar una fraccion
Fraccion* sumar(Fraccion* f1, Fraccion* f2);

//Imprimir la fraccion
void imprimir(Fraccion* f);

//Destruir la fraccion
void destruir(Fraccion* f);

#endif
