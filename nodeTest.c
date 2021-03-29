#include <stdio.h> 
#include <stdlib.h>
/* 
Author: Dennis Burmeister
Description: Linked List implementation and test
Created Date: 3/16/21
*/
struct Node {
	int data;
	struct Node* next;
}
;void setNextNode(struct Node** first, int val)
{
	struct Node* newLink = (struct Node*)malloc(sizeof(struct Node));
	struct Node *hold = *first;

	newLink ->data = val;
	newLink ->next = NULL;
	
	if (*first == NULL) 
	{
		*first = newLink;
		return;
	}
	
	while (hold->next != NULL)
	{
		hold = hold->next;
	}
	hold -> next = newLink;
	return;
}
void printLList(struct Node* LL)
{
	if (LL == NULL)
	{
		printf("NULL Link List.");
		return;
	}
	printf("The linked list is: ");
	while(LL != NULL)
	{
	printf("[%d| ]--> ", LL->data);
		LL = LL->next;
	}
	printf("NULL \n");
	return;
}
main(int argc, char *argv[])
{
	int i, j;
	struct Node* link = NULL;
	for(i = 1; i < argc; i++)
	{
		setNextNode(&link, atoi(argv[i]));
	}
	printLList(link);
}


