#include <stdio.h>
#include <stdlib.h>
#include "MemoryManager.h"

// Creates the required structure to manage the available memory
void Create(T_handler* handler){
	(*handler) = (T_handler) malloc(sizeof(struct T_Node));
	(*handler)->start = 0;
	(*handler)->end = 99;
	(*handler)->next = NULL;
}

// Frees the required structure
void Destroy(T_handler* handler){
	if ((*handler) != NULL) {
		T_handler aux = (*handler);
		(*handler) = (*handler)->next;
		free(aux);
		Destroy(&(*handler));
	}
}

/* Returns in "ad" the memory address where the required block of memory with length "size" starts.
 * If this operation finishes successfully then "ok" holds a TRUE value; FALSE otherwise.
 */
void Allocate(T_handler* handler, unsigned size, unsigned* ad, unsigned* ok){
	if (*handler == NULL) { // No memory
		*ok = 0;
	} else { // Pointing to node
		if (( (*handler)->end - (*handler)->start+1 ) > size ){ // We can add in first node
			(*ad) = (*handler)->start;
			(*handler)->start += size;
			(*ok) = 1;
		} else if (((*handler)->end - (*handler)->start +1 ) == size){ // Two nodes collide
			(*ad) = (*handler)->start;
			(*ok) = 1;
			T_handler aux = (*handler);
			(*handler) = aux->next;
			free(aux);
		} else {
			Allocate(&(*handler)->next, size, ad, ok);
		}
	}

	return;
}

void Deallocate_Stage1(T_handler* handler, unsigned size ,unsigned ad){
	if ((*handler) == NULL) { // Create new node
		(*handler) = (T_handler) malloc(sizeof(struct T_Node));
		(*handler)->start = ad;
		(*handler)->end = ad+size-1;
		(*handler)->next = NULL;
	} else if ((*handler)->start > ad) {
		T_handler aux = (T_handler) malloc(sizeof(struct T_Node));
		aux->start = ad;
		aux->end = ad+size-1;
		aux->next = (*handler);
		(*handler) = aux;
	} else {
		Deallocate_Stage1(&((*handler)->next), size, ad);
	}
}


// Merge contiguous blocks of memory
void Deallocate_Stage2(T_handler *handler){
	if ((*handler)->next == NULL){
		return;
	}
	// Memory is contiguous, must join pieces
	if ((*handler)->end == (*handler)->next->start - 1){
		(*handler)->end = (*handler)->next->end;

		T_handler aux = (*handler)->next->next;
		free((*handler)->next);

		(*handler)->next = aux;
		Deallocate_Stage2(&(*handler));
	} else { //Not contiguous carry on
		Deallocate_Stage2(&((*handler)->next));
	}
}


/* Frees a block of memory with length "size" which starts at "ad" address.
 * If needed, can be assumed to be a previous allocated block
 */
void Deallocate(T_handler* handler, unsigned size ,unsigned ad){
	Deallocate_Stage1(handler, size , ad);
	Deallocate_Stage2(&(*handler));



}

/* Shows the current status of the memory */
void Show (T_handler handler){
	while (handler != NULL) {
		printf("[%d, %d]", handler->start, handler->end);
		handler = handler->next;
	}
	printf("\n");
}
