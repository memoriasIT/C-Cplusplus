
#ifndef CIRCULARLIST_H_
#define CIRCULARLIST_H_

// Proccess list structure
typedef struct ProcessNode* LProc;
struct ProcessNode {
	int idproc;
	LProc next;
};


// Creates empty process list
void Crear (LProc *lista);

// Add process to list
// Added to the node before the execution
void AnyadirProceso(LProc *lista, int idproc);

// Shows list
void MostrarLista (LProc lista);

// Simulates the execution of a process pointed
// in execution, deleting it from proccess list.
void EjecutarProceso (LProc *lista);

#endif /* CIRCULARLIST_H_ */
