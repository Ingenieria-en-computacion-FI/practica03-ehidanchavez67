#include <stdio.h>
#include <stdlib.h>
#include "fraccion.h"

int mcd(int a, int b) {
    if (b == 0)
        return abs(a);
    return mcd(b, a % b);
}

Fraccion* crearFraccion(int num, int den) {
    if (den == 0) {
        printf("Error: el denominador no puede ser 0\n");
        return NULL;
    }

    Fraccion* f = (Fraccion*) malloc(sizeof(Fraccion));
    f->num = num;
    f->den = den;

    return f;
}

void simplificar(Fraccion* f) {
    int divisor = mcd(f->num, f->den);

    f->num /= divisor;
    f->den /= divisor;

    if (f->den < 0) {
        f->num *= -1;
        f->den *= -1;
    }
}

Fraccion* sumar(Fraccion* f1, Fraccion* f2) {
    int num = f1->num * f2->den + f2->num * f1->den;
    int den = f1->den * f2->den;

    Fraccion* resultado = crearFraccion(num, den);

    simplificar(resultado);

    return resultado;
}

void imprimir(Fraccion* f) {
    printf("%d/%d\n", f->num, f->den);
}

void destruir(Fraccion* f) {
    free(f);
}
