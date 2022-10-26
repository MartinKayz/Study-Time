/*   */


#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int age;
	struct Node * next;
};


int  main()
{
	struct Node *first = NULL;
	struct Node *second = NULL;
	struct Node *third = NULL;
	/* Adding new node to start of Linked List */
	struct Node *new_node = NULL;

	first = (struct Node *)malloc(sizeof(struct Node*));
	second = (struct Node *)malloc(sizeof(struct Node*));
	third = (struct Node *)malloc(sizeof(struct Node*));
	new_node = (struct Node *)malloc(sizeof(struct Node *));

	/* Assigning data to the node */

	first->age = 30;
	first->next = second;
	
	second->age = 40;
	second->next = third;

	third->age = 15;
	third->next = NULL;
	
	new_node->age = 25;
	new_node->next = first;

	/* Updating the head to equal to new node */

	first = new_node;
	/* Print the nodes of a linked list */

	while (first != NULL)
	{
		printf("%d\n", first->age);
		first = first->next;
	}

	return (0);
}

