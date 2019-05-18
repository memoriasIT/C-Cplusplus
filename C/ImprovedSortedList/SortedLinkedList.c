/*
 ============================================================================
 Name        : SortedLinkedList.c
 Author      : SGR
 Version     :
 Copyright   : Código Abierto
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "SortedLinkedList.h"

T_List create(){
	return NULL;
}
void insertHead (T_List * pl, int key) {
	T_List aux = (T_List)malloc(sizeof(T_Node));
	aux->key = key;
	aux->next = (*pl);
	(*pl) = aux;
}
void insertSorted (T_List * pl, int key){
	if (*pl == NULL)
		insertHead(pl, key);
	else if ((*pl)->key > key)
		insertHead(pl, key);
	else
		insertSorted(&((*pl)->next), key);
}
void removeHead (T_List * pl){
	if (*pl == NULL)
		return;
	else {
		T_List aux = (*pl);
		(*pl) = (*pl)->next;
		free(aux);
	}
}
void removeKey (T_List * pl, int key){
	if (*pl == NULL)
		return;
	else if ((*pl)->key != key)
		removeKey(&((*pl)->next), key);
	else
		removeHead(pl);
}


void removeSortedKey (T_List * pl, int key){
	if (*pl == NULL)
		return;
	else if ((*pl)->key < key)
		removeKey(&((*pl)->next), key);
	else if ((*pl)->key == key)
		removeHead(pl);
	else
		return;
}

int isKey (T_List l, int key){
	if (l == NULL)
		return 0;
	else if (l->key != key)
		return isKey(l->next, key);
	else
		return 1;
}
int isSortedKey (T_List l, int key) {
	if (l == NULL)
		return 0;
	else if (l->key < key)
		return isSortedKey(l->next, key);
	else if (l->key == key)
		return 1;
	else
		return 0;
}

int length(T_List l) {
	if (l == NULL)
		return 0;
	else
		return 1+length(l->next);
}

void show(T_List l){
	while (l != NULL) {
		printf("%d, ", l->key);
		l = l->next;
	}
}
