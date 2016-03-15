/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *temp = head,*previous_node=head;
	int node_place = 1;
	if (K >1){
		if (head == NULL){
			head=NULL;
		}
		else{
			while (temp != NULL){
				if (node_place == K){
						previous_node->next = temp->next;
						node_place = 0;
				}
				else{
					previous_node = temp;
					temp = temp->next;
					node_place++;
				}
			}
		}
		return head;
	}
	else{
		if (K == 1){
			head=temp->next;
		}
		else{
			return NULL;
		}
		return NULL;
	}
}