/*
 ============================================================================
 Name        : Introduction_to_linked_list.c
 Author      : Goran Vujnovic
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/******************************************
 *       ARRAYS   ||  LINKED LISTS        *
 *   =============||====================  *
 *    int i = 0;  || Node* curr = &root;  *
 *   =============||====================  *
 *     i < n;     || curr != NULL;        *
 *   =============||====================  *
 *       i++;     || curr = curr->next;   *
 *   =============||====================  *
 ******************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int x;
	struct Node* next;

}Node;

Node* head = NULL;

void insert_end(Node** root, int value)
{
	Node* new_node = malloc(sizeof(Node));

	if(new_node == NULL)
	{
		exit(1);
	}

	new_node->next = NULL;
	new_node->x = value;

	if(*root == NULL)
	{
		*root = new_node;

		return;
	}

	Node* curr = *root;
	while(curr->next != NULL)
	{
		curr = curr->next;
	}

	curr->next = new_node;
}

void deallocate(Node** root)
{
	Node* curr = *root;
	while(curr != NULL)
	{
		Node* aux = curr;
		curr = curr->next;
		free(aux);
	}
	*root = NULL;
}

int main(void)
{
	Node* root = NULL;

	insert_end(&root, -2);
	insert_end(&root, 10);
	insert_end(&root, -25);

	Node* curr = root;
	while(curr != NULL)
	{
		printf("%d\n", curr->x);

		curr = curr->next;
	}

	deallocate(&root);

	return 0;
}









