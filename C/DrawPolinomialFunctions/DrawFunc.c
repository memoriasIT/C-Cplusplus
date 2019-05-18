#include <stdlib.h>
#include <stdio.h>
#include "DrawFunc.h"

void	crearLista(TLista	*lista){
	*lista = (TLista) malloc(sizeof(struct Punto));
	*lista = NULL;
}


void recursiveInsertion(TLista	*lista,	struct	Punto	punto,	int	*ok){
	// Linear search until find place to insert
	TLista current = *lista;
	while (punto.x >= current->pnt.x){
		recursiveInsertion(&(*current->next), punto, ok);
	}

	// Don't add the point if x already defined
	if (current->pnt.x == punto.x){
		*ok = 0;
	} else { // Add the point
		TLista newPoint = (TLista) malloc(sizeof(struct Punto));
		newPoint->next = current->next;
		current->next = &newPoint;
		newPoint->pnt = punto;

		*ok = 1;
	}

}


void	insertarPunto(TLista	*lista,	struct	Punto	punto,	int	*ok){
	if (*lista == NULL){
		// Insert at first position
		puts("insertion");
		(*lista)->pnt = punto;
//		(*lista)->next = NULL;
	} else {
		puts("recursive");
//		recursiveInsertion(lista, punto, ok);
	}
}

void	eliminarPunto(TLista	*lista,	float	x,	int	*ok){

}

void	mostrar_lista(TLista	lista){

}

void	destruir(TLista	*lista){

}

void	leePuntos(TLista	*lista,char	*	nFichero){

}



int main(void){
	TLista lista;
	struct Punto punto = {1, 2};
	int *ok = 0;

	puts("test");
	crearLista(&lista);

	if (lista == NULL){
		puts("Null");
	} else {
		puts("wtf man");
	}

	puts("test");
	insertarPunto(&lista, punto, ok);
//	printf("%f-%f", lista->pnt.x, lista->pnt.y);


	return 0;
}
