#ifndef __NODO_H__
#define __NODO_H__

typedef struct nodo Nodo; 
/* Crea un nodo con el valor indicado */
Nodo* crearNodo(int valor);

/* Obtiene el valor almacenado en el nodo */
int obtenerValor(Nodo* n);

/* Cambia el valor almacenado en el nodo */
void asignarValor(Nodo* n, int nuevoValor);

/* Libera la memoria del nodo */
void destruirNodo(Nodo* n);

#endif
