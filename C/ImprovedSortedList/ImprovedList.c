/*
 * ImprovedList.c
 *
 *  Created on: 13 mar. 2019
 *      Author: sergio
 */
#include <stdio.h>
#include <stdlib.h>
#include "ImprovedList.h"
#include "SortedLinkedList.h"

void create_ImprovedList(T_ImprovedList l){
	for(int i=0;i<10;i++)
		l[i]=create();
}

void insertSorted_ImprovedList (T_ImprovedList l, int key){
	insertSorted(&(l[key/100]), key);
}
void show_ImprovedList (T_ImprovedList l){
	for(int i=0;i<10;i++){
		show(l[i]);
	}
}
