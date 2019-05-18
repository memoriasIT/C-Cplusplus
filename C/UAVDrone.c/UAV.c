#include <stdio.h>
#include <stdlib.h>
#include "MemoryManager.h"

int main () {

	T_handler handler;
	unsigned ok;
	unsigned ad;
	printf("The program has started.\n");
	Create(&handler);
	Show(handler);

	Allocate(&handler,50,&ad,&ok);
	if (ok) {
		Show(handler);
		printf("Starting address is: %d\n", ad);
	} else {
		printf("Unable to allocate such a memory\n");
	}

	Deallocate(&handler, 20,0);
	Show (handler);


	Allocate(&handler,25,&ad,&ok);
	if (ok) {
		Show(handler);
		printf("Starting address is: %d\n", ad);
	} else {
		printf("Unable to allocate such a memory\n");
	}

	Deallocate(&handler,10,50);
	Show(handler);

	Allocate(&handler,25,&ad,&ok);
	if (ok) {
		Show(handler);
		printf("Starting address is: %d\n", ad);
	} else {
		printf("Unable to allocate such a memory\n");
	}

	printf("Deallocate 20, 20\n");
	Deallocate(&handler, 30,20);
	Show(handler);


	printf("Destroyed:\n");
	Destroy(&handler);
	Show (handler);

	printf("End Of Program\n");

	return 0;
}

