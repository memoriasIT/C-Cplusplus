/*
 * SortedLinkedList.h
 *
 *  Created on: 13 mar. 2019
 *      Author: sergio
 */

#ifndef SORTEDLINKEDLIST_H_
#define SORTEDLINKEDLIST_H_

typedef struct t_Node * T_List;
typedef struct t_Node {
	int key;
	// other data;
	T_List next;
} T_Node;

T_List create();
void insertHead (T_List * pl, int key);
void insertSorted (T_List * pl, int key);
void removeHead (T_List * pl);
void removeKey (T_List * pl, int key);
void removeSortedKey (T_List * pl, int key);
int isKey (T_List l, int key);
int isSortedKey (T_List l, int key);
int length(T_List l);
void show(T_List l);

#endif /* SORTEDLINKEDLIST_H_ */
