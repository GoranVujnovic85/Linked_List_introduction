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


int main(void)
{
	Node root;
	root.x = 15;
	root.next = malloc(sizeof(Node));
	root.next->x = -2;
	root.next->next = NULL;

	printf("First: %d\n", root.x);
	printf("Second: %d\n", root.next->x);

	free(root.next);
	return 0;
}
