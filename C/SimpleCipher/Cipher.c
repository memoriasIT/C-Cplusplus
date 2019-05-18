#include <stdio.h>
#include <stdlib.h>
#include "Cipher.h"


void crearEsquemaDeCifrado (TCifrado *cf){
	(*cf) = (TCifrado) malloc(sizeof(struct TBox));
	(*cf)->sig = NULL;
}

void insertarBox (TCifrado * cf, struct TBox box, unsigned char *ok) {
	// Get to last item
	TCifrado* temp = cf;
	while((*temp)->sig != NULL) {
		*temp = (*temp)->sig;
	}

	// NewBox to add
	TCifrado newBox = (TCifrado) malloc(sizeof(struct TBox));
	(*newBox).bitACambiar = box.bitACambiar;
	(*newBox).esSBox = box.esSBox;
	(*newBox).sig = NULL;
	(*newBox).valorASumar = box.valorASumar;

	(*temp)->sig = newBox;

	*ok = 1;

}


unsigned char aplicarBox (struct TBox box, unsigned char valor){
	if (box.esSBox) {
		// Sum algorithm
		valor += box.valorASumar;
	} else {
		// XOR algorithm
		if (box.bitACambiar){
			// Changes pos 0
			valor = valor^00000001;
		} else {
			// Changes pos 7
			valor = valor^10000000;
		}

	}

	return valor;

}

unsigned char aplicarEsquemaDeCifrado(TCifrado cf, unsigned char valor){
	TCifrado *current = &cf;
	struct TBox temp;

	while((*current)->sig != NULL){
		// Save data to temp struct
		temp.esSBox = (*current)->esSBox;
		temp.bitACambiar = (*current)->bitACambiar;
		temp.valorASumar = (*current)->valorASumar;

		// Apply box to value and advance
		valor = aplicarBox( temp, valor);
		*current = (*current)->sig;
	}

	free(current);
	return valor;
}

void escribirAFichero(char *nm, TCifrado cf){
	FILE *f = fopen(nm, "wb");
	if (f == NULL) {
		printf("FILE ERROR\n");
	}

	fwrite(cf, sizeof(cf), 1, f);
}

void destruirEsquemaDeCifrado (TCifrado *cf){
	if ((*cf) != NULL){
		TCifrado aux = (*cf);
		(*cf) = (*cf)->sig;
		free(aux);
		destruirEsquemaDeCifrado (&(*cf));
	}
}


int main(void){
	TCifrado cf;
	crearEsquemaDeCifrado(&cf);

	return 0;
}
