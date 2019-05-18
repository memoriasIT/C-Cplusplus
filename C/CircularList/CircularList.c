#include <stdlib.h>
#include <stdio.h>


#include "CircularList.h"

// Creates empty process list
void Crear (LProc *lista){
	*lista = (LProc) malloc(sizeof(struct ProcessNode));
	(*lista)->next = *lista;
	(*lista)->idproc = -1;

}

// Add process to list
// Added to the node before the execution
void AnyadirProceso(LProc *lista, int idproc) {
	LProc temp = (LProc) malloc(sizeof(struct ProcessNode));
	temp->idproc = idproc;
	temp->next = *lista;

	if ((*lista)->idproc == -1){
		// Add at first pos
		(*lista)->idproc = idproc;
	} else {
		// Linear search until next one is *lista, we change next to *temp
		LProc currentProc = (LProc) malloc(sizeof(struct ProcessNode));
		currentProc = *lista;
		while (currentProc->next != *lista){
			currentProc = currentProc->next;
		}
		currentProc->next = temp;

	}

}

// Shows list
void MostrarLista (LProc lista) {
	// Linear printing
	LProc currentProc = (LProc) malloc(sizeof(struct ProcessNode));
	currentProc = lista;

	while(currentProc->next != lista){
		printf("[ %d ] -> ", currentProc->idproc);
		currentProc = currentProc->next;
	}
	printf("[ %d ] \n", currentProc->idproc);
}

// Simulates the execution of a process pointed
// in execution, deleting it from proccess list.
void EjecutarProceso (LProc *lista) {
	if (*lista == (*lista)->next){
		(*lista)->idproc = -1;

	} else {
		// Save pointer for comparisson
		int *first = *lista;
		// Delete first element
		*lista = (*lista)->next;

		// Linear search until next one is *lista, we change next to *lista->next
		LProc currentProc = (LProc) malloc(sizeof(struct ProcessNode));
		currentProc = *lista;
		// Advance until next one is the first element
		while (currentProc->next != first){
			currentProc = currentProc->next;
		}
		// Next one is first item
		currentProc->next = currentProc->next->next;
	}

}

