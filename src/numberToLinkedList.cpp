/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *new_node = NULL, *start = NULL, *temp1;
	int N_size = 0, temp = N, i, *a;
	if (N == 0){
		new_node = (struct node*)malloc(sizeof(struct node));
		new_node->num = 0;
		new_node->next = NULL;
		start = new_node;
	}
	else{
		if (N < 0){
			N = -N;
		}
		temp = N;
		while (temp > 0){
			temp = temp / 10;
			N_size++;
		}
		temp = N;
		a = (int*)malloc(N_size + 1 * sizeof(int));
		for (i = 0; i < N_size; i++){
			a[i] = temp % 10;
			temp = temp / 10;
		}
		i = 0;
		new_node = (struct node*)malloc(sizeof(struct node));
		new_node->num = a[i];
		new_node->next = NULL;
		start = new_node;
		for (i = 1; i < N_size; i++){
			new_node = (struct node*)malloc(sizeof(struct node));
			new_node->num = a[i];
			new_node->next = start;
			start = new_node;
		}
	}
	return start;
}