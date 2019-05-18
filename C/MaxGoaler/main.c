#include "ListaJugadores.h"

int main (void) {
	TListaJugadores lista;
	int id = 1;

	crear(&lista);
//	insertar(&lista, id);


	id = 2;
	insertar(&lista, id);
	insertar(&lista, id);
	insertar(&lista, id);
	insertar(&lista, id);
	insertar(&lista, id);



	//	insertar(&lista, 5);
//
//	insertar(&lista, 3);
//	insertar(&lista, 3);
//	insertar(&lista, 3);
//	insertar(&lista, 3);
//	insertar(&lista, 3);
//
	recorrer(lista);
//	eliminar(&lista, 2);
//
//	recorrer(lista);
//
//	destruir(&lista);
//

	return 0;
}
