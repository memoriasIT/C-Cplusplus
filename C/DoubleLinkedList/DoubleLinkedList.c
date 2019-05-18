/*
 ============================================================================
 Name        : DoubleLinkedList.c
 Author      : SGR
 Version     :
 Copyright   : Código Abierto
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "DoubleLinkedList.h"

T_List create(){
	return NULL;
}
void insertHead (T_List * pl, int key) {
	T_List aux = (T_List)malloc(sizeof(T_Node));
	aux->key = key;
	aux->previous = NULL;
	if ((*pl) == NULL){
		aux->next = NULL;
	} else {
		(*pl)->previous = aux;
	}
	(*pl) = aux;
}
void removeKey (T_List * pl, int key) {

}
int length(T_List l){

}


void show(T_List l){
	while (l != NULL){
		if (l->next == NULL){
			printf("%d ]\n", l->key);
		} else {
			printf("%d, ", l->key);
		}

		l = l->next;
	}
}
