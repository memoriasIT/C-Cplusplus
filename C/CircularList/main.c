#include <stdlib.h>
#include <stdio.h>
#include "CircularList.h"

int main(void){

	LProc ProcessList;
	Crear(&ProcessList);
	int idproc = 3;
	AnyadirProceso(&ProcessList, idproc);

	idproc = 4;
	AnyadirProceso(&ProcessList, idproc);

	idproc = 5;
	AnyadirProceso(&ProcessList, idproc);

	idproc = 6;
	AnyadirProceso(&ProcessList, idproc);

	idproc = 7;
	AnyadirProceso(&ProcessList, idproc);

	MostrarLista(ProcessList);

	EjecutarProceso(&ProcessList);
	MostrarLista(ProcessList);
	EjecutarProceso(&ProcessList);
	MostrarLista(ProcessList);
	EjecutarProceso(&ProcessList);
	MostrarLista(ProcessList);
	EjecutarProceso(&ProcessList);
	MostrarLista(ProcessList);
	EjecutarProceso(&ProcessList);
	MostrarLista(ProcessList);

	return 0;
}
