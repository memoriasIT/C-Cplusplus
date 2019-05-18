#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int num;
	struct Node *next;
} T_Node;


// Print full list in linear manner
void printList(T_Node *l){
	// Null Case
	if (l == NULL) {
		printf("List is empty\n");
	} else {
		// Advance until null found
		printf("LinkedList: ");
		while (l != NULL){
			if (l->next != NULL){
				printf("%d, ", l->num);
			} else {
				printf("%d\n", l->num);
			}
			l = l->next;
		}
	}

}

//Add one to each element in list
void PlusOne(T_Node *l){
	while(l != NULL){
		l->num++;
		l = l->next;
	}
}

//Apply whatever function to list
void ApplyFunc(T_Node *l, void (*f) (T_Node *l)){
	return f(l);
}

// Search item in list in a linear way
// Returns -1 if not found
int LinearSearch(T_Node *l, int item){
	int counter = 0;

	// While not end and not found
	while ((l != NULL) && (l->num != item)){
		l = l->next;
		counter++;
	}

	return (l == NULL) ? (counter = -1) : counter;
}

// Remove first element
void RemoveFirst(T_Node **l){
	if (l == NULL){
		printf("List is empty");
	} else {
		*l = (*l)->next;
	}
}

// Insert item at head
void InsertFirst(T_Node **l, int item){
	// Create first node
	T_Node *first = malloc(sizeof(T_Node));
	(*first).num = item;
	(*first).next = (*l);

	// Change reference to first node of list
	(*l) = first;
}

//Create a list given an array and function
T_Node* ListfromArray(int* arr, void (*f) (T_Node **l, int item)){
	T_Node *result = NULL;

	for (int i = sizeof(arr)-1; i >= 0; i--){
		f(&result, arr[i]);
	}

	return result;
}

// Insert in order
void InsertOrder(T_Node **list, int item){
	T_Node *temp = malloc(sizeof(T_Node));
	temp->num = item;

	if ((*list) == NULL) {				    // Empty List
		temp->next = NULL;
		*list = temp;
	} else if (temp->num <= (*list)->num){ 	// Insert in front
		temp->next = (*list);
		*list = temp;
	} else {								// Middle or end
		T_Node *prev = *list;
		while ( (prev->next != NULL) && (temp->num > (prev->next->num)) ){
			prev = prev->next;
		}
		temp->next = prev->next;
		prev->next = temp;
	}
}



int main(void) {
	int ArrayList[] = {6,7,8,1,2,6};

	// Generate Ordered List from Array
	T_Node *OrderedList = ListfromArray(ArrayList, InsertOrder);
	printf("\t[ Ordered List from Array: ]\n");
	printList(OrderedList);

	// Generate List from array
	T_Node *list = ListfromArray(ArrayList, InsertFirst);
	printf("\t[ List from Array: ]\n");
	printList(list);

	// Sum one to all elements
	ApplyFunc(list, PlusOne);
	printf("\t[ Apply (+1) to all elements: ]\n");
	ApplyFunc(list, printList);

	// Search for element
	printf("\t[ Searching elements: ]\n");
	int num = 2;
	printf("Search for %d: %d\n", num, LinearSearch(list, num));

	num = 14;
	printf("Search for %d: %d\n", num, LinearSearch(list, num));

	// Remove head element and print
	printf("\t[ Remove Head: ]\n");
	RemoveFirst(&list);
	printList(list);

	return 0;
}
