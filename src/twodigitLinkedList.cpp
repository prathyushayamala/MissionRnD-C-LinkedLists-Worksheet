/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int digit1;
	int digit2;
	struct node *next;
};
int power(int num, int superscript){
	if (superscript > 0){
		while (superscript > 0){
			num = num*num;
			superscript--;
		}
	}
	else{
		if (superscript == 0){
			num = 1;
		}
	}
	return num;
}
int convert_sll_2digit_to_int(struct node *head){
	struct node *temp=head;
	int number_of_nodes = 0,number=0;
	while (temp != NULL){
		temp = temp->next;
		number_of_nodes++;
	}
	temp = head;
	while (temp != NULL){
		number =number+(((temp->digit1 * 10) + (temp->digit2))*(power(10,number_of_nodes-1)));
		number_of_nodes--;
		temp = temp->next;
	}
	return number;
}
