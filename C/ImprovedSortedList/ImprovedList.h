/*
 * ImprovedList.h
 *
 *  Created on: 13 mar. 2019
 *      Author: sergio
 */

#ifndef IMPROVEDLIST_H_
#define IMPROVEDLIST_H_

#include "SortedLinkedList.h"

typedef T_List T_ImprovedList[10];

void create_ImprovedList(T_ImprovedList l);
void insertSorted_ImprovedList (T_ImprovedList l, int key);
void show_ImprovedList (T_ImprovedList l);

#endif /* IMPROVEDLIST_H_ */
