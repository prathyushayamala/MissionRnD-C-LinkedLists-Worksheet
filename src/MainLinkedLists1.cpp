/*

Use MainLinkedLists1 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.s

Do not write same add,display function in every CppFile .VS throws an error if two files
have some functions with same signature.
You can either change the signature in each file by using add1,display2 like that or 
keep a common header file which has functions for handling common tasks for debugging
like displaying and include that header file in each Problem file .

Only jump into this lesson after you did all specified functions in Tutorial Lesson.

Objectives of C-LinkedLists-1 Lesson:

->Add/Delete/Display nodes in SLL
->Manipulate Links in SLL
->Handling SLL which have nodes of more than one data field


*/


//Do not edit below Header Files
#include <stdio.h>
#include<stdlib.h>
#include "FunctionHeadersLinkedLists1.h"
struct node {
	int digit1;
	int digit2;
	struct node *next;
};

struct node * createNode(int n1, int n2) {
	struct node *newNode;
		newNode= (struct node *)malloc(sizeof(struct node));
	newNode->digit1 = n1;
	newNode->digit2 = n2;
	newNode->next = NULL;
	return newNode;
}

void add(struct node **head, int p, int q){
	struct node *temp = *head;
	if (*head == NULL){
		(*head) = createNode(p, q);
		(*head)->next = NULL;
	}
	else{
		while (temp->next != NULL){
			temp = temp->next;
		}
		temp->next = createNode(p, q);
		temp->next->next = NULL;
	}
}

int main(){
	int num = 0;
	struct node *head = NULL;
	add(&head, 1, 2);
	add(&head, 5, 6);
	add(&head, 3, 4);
	num = convert_sll_2digit_to_int(head);
	//Test 012SortSll

	//Test numberToLinkedList

	//Test removeEveryKthNode

	//Test sortLinkedList

	//Test twodigitLinkedList

	return 0;
}