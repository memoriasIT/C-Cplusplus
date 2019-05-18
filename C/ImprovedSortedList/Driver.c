/*
 * Driver.c
 *
 *  Created on: 13 mar. 2019
 *      Author: memoriasIT
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "SortedLinkedList.h"
#include "ImprovedList.h"


int main(void) {
	clock_t start = clock();

	srand(time(NULL));   // Initialization, should only be called once.
	T_ImprovedList list;
	create_ImprovedList(list);
	for(int i=0;i<9000;i++)
		insertSorted_ImprovedList(list, rand()%1000); // Inserts random numbers between 0 and 999
//	show_ImprovedList(list); printf("\n");


	clock_t end = clock();
	float seconds = (float)(end - start) / CLOCKS_PER_SEC;

	printf("\nImproved Version: %lf", seconds);


	start = clock();

	T_List list2 = create();
	for(int i=0;i<9000;i++)
		insertSorted(&list2, rand()%1000); // Inserts random numbers between 0 and 999
//	show(list2);
//	insertSorted(&list, 400);
//	show(list);
//	printf("Is 400 in the list? %d\n", isKey(list, 400));
//	printf("Is 400 in the list? %d\n", isSortedKey(list, 400));
//	removeHead(&list);
//	show(list);
//	removeSortedKey(&list, 400);
//	show(list);
//	printf("Is 400 in the list? %d\n", isKey(list, 400));
//	printf("Is 400 in the list? %d\n", isSortedKey(list, 400));
//	printf("Length: %d\n", length(list));

	end = clock();
    float seconds2 = (float)(end - start) / CLOCKS_PER_SEC;

	printf("\nNot Improved: %lf", seconds2);



	printf("\n\nImproved version is about %f times better.", seconds2/seconds);
}
