/*
 * DoubleLinkedList.h
 *
 *  Created on: 13 mar. 2019
 *      Author: sergio
 */

#ifndef DOUBLELINKEDLIST_H_
#define DOUBLELINKEDLIST_H_

typedef struct t_Node * T_List;
typedef struct t_Node {
	int key;
	// other data;
	T_List next;
	T_List previous;
} T_Node;


T_List create();
void insertHead (T_List * pl, int key);
void removeKey (T_List * pl, int key);
int length(T_List l);
void show(T_List l);

#endif /* DOUBLELINKEDLIST_H_ */
