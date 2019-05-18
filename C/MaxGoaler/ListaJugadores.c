
#include "ListaJugadores.h"


void crear(TListaJugadores *lj){
	// Create structure
	*lj = (TListaJugadores) malloc(sizeof(struct TLista));
	(*lj)->Goals = 0;
	(*lj)->Pnum = 0;
	(*lj)->next = NULL;
}

void insertar(TListaJugadores *lj,unsigned int id) {
	if ((*lj)->Goals == 0) {
		// List is empty
		(*lj)->Goals = 1;
		(*lj)->Pnum = id;
	} else {
		// List is not empty, search for player
		while((*lj)->Pnum != id && ((*lj)->next != NULL)){
			lj = (*lj)->next;
		}

		// Check if we found the player or not
		if ((*lj)->Pnum == id){
			// We found it - add 1 goal
			(*lj)->Goals++;

		} else {
			// Not found - add player to list
			// Generate player with id and 1 goal
			TListaJugadores newPlayer = (TListaJugadores) malloc(sizeof(struct TLista));
			newPlayer->Goals = 1;
			newPlayer->Pnum = id;


			// Add player to the end of the list
			(*lj)->next = &newPlayer;
		}
	}

}

void recorrer(TListaJugadores lj) {
	while (lj->next != NULL){
		printf("[ ID: %d - Goals: %d ]\n", lj->Pnum, lj->Goals);
		lj = lj->next;
	}
	printf("[ ID: %d - Goals: %d ]\n", lj->Pnum, lj->Goals);
}

int longitud(TListaJugadores lj) {
	int num = 0;
	while (lj != NULL){
		lj = *(lj->next);
		num++;
	}

	return num;
}

void eliminar(TListaJugadores *lj,unsigned int n) {
	// Search when we have the first player with less goals
	while ((*lj)->Goals >= n){
		lj = (*lj)->next;
	}

	// Destroy the rest
	destruir(lj);
}

unsigned int maximo(TListaJugadores *lj) {
	if (lj == NULL){
		// list is empty
		return 0;
	} else {
		// Return max goaler with max id
		return (*lj)->Pnum;
	}
}

void destruir(TListaJugadores *lj) {
	TListaJugadores aux;
	aux = *lj;
	lj = (*lj)->next;

	free(aux);
	destruir(lj);

}


