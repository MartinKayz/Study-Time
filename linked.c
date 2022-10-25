#include <stdlib.h>
#include <stdio.h>

struct Node 
{
	int ages;
	struct Node * next;
};


int main()
{

	/* Create 3 nodes */
	struct Node *head = NULL;
	struct Node *second = NULL;
	struct Node *third = NULL;

	/* Allocate memory to the nodes */
	head = (struct Node *)malloc(sizeof(struct Node *));
	second = (struct Node *)malloc(sizeof(struct Node *));
	third = (struct Node *)malloc(sizeof(struct Node *));

	/* Assigning data to the nodes */
	head->ages = 23;
	head->next = second;

	second->ages = 54;
	second->next = third;
	
	third->ages = 12;
	third->next = NULL;


	/* print the values of the linked list */
	while (head != NULL)
	{
		printf("%d\n", head->ages);
		head = head->next;
	}

	return (0);
}

