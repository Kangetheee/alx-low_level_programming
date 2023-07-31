#include <stdio.h>
#include "lists.h"

/**
 * code prints elements in a linked list
 * @x is the head of the node
 * return number of nodes
 */

size_t print_listint(const listint_t *x){
	int count= 0;
	if (x != NULL){
		while(x){
			printf("%d\n", x->n);
			x = x->next;
			count++;
		}
	}
	return(count);
}
