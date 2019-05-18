#ifndef LISTAJUGADORES_H_
#define LISTAJUGADORES_H_

#include <stdlib.h>
#include <stdio.h>


// Sorted list by Pnum
typedef struct TLista* TListaJugadores;
struct TLista {
	unsigned int Pnum;
	unsigned int Goals;
	TListaJugadores* next;
};

void crear(TListaJugadores *lj);

void insertar(TListaJugadores *lj,unsigned int id);

void recorrer(TListaJugadores lj);

int longitud(TListaJugadores lj);

void eliminar(TListaJugadores *lj,unsigned int n);

unsigned int maximo(TListaJugadores *lj);

void destruir(TListaJugadores *lj);

#endif /* LISTAJUGADORES_H_ */
