/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	struct node *temp;
	int zero_count = 0, one_count = 0, two_count = 0;
	temp = head;
	while (temp != NULL){
		if (temp->data == 0){
			zero_count++;
		}
		else{
			if (temp->data == 1){
				one_count++;
			}
			else{
				two_count++;
			}
		}
		temp = temp->next;
	}
	temp = head;
	while (temp != NULL){
		while (zero_count != 0){
			temp->data = 0;
			temp = temp->next;
			zero_count--;
		}
		while (one_count != 0){
			temp->data = 1;
			temp = temp->next;
			one_count--;
		}
		while (two_count != 0){
			temp->data = 2;
			temp = temp->next;
			two_count--;
		}
	}
}