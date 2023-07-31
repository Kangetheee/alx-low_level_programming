#include <stdlib.h>
#include "lists.h"

/**
 *It stores the next node (the one after the head) in the new_head variable.
 *It retrieves the value of the first node ((*head)->n) and stores it in n.
 *It frees the memory of the first node using free(*head).
 *It then updates the head pointer (*head) to point to the new_head, effectively removing the first node from the list.
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
