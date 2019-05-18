#include <stdio.h>
#include <stdlib.h>
typedef struct TNode* TArbol;

struct TNode {
	int data;
	TArbol* left;
	TArbol* right;
};

void CrearABB (TArbol *arb){
	(*arb) = (TArbol) malloc(sizeof(struct TNode));
	*arb = 0;
}

void InsertarEnABB (TArbol *arb, int elem) {
	if (*arb == NULL) {
		puts("test2");
	} else {
		puts("test3");
	}
}


int main(void) {
	TArbol arb;
	CrearABB(&arb);
	puts("test1");
	int elem = 1;
	InsertarEnABB(&arb, elem);

	return 0;
}
