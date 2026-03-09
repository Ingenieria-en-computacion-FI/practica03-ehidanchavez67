#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

/* TODO
   Definir la estructura Nodo.
   Debe contener un entero llamado valor.
*/
struct Nodo
{
    int dato;
};
/* Crear un nodo dinámicamente */
Nodo* crearNodo(int valor)
{
    nodo* nuevo (nodo*)malloc(sizeof(nodo));
    if (nuevo == NULL) {
       printf("Error: Opcion invalida\n");
        return NULL;
    }
    nuevo->dato = valor;   
}
/* Obtener el valor almacenado */
int obtenerValor(Nodo* n)
{
    if(n == NULL) return 0;
    return n->dato;
}
/* Modificar el valor almacenado */
void asignarValor(Nodo* n, int nuevovalor)
{
    if (n != NULL) {
       n->dato = nuevoValor;
    }
}
/* Liberar memoria del nodo */
void destruirNodo(Nodo* n)
{
    if(n !== NULL) {
       free(n);
       printf("El nodo ha dejado de existir\n");
    }
]
