#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - ...
  * If the deletion is not at the beginning of the list, the function enters the while loop to find the node to be deleted:
  * The loop continues as long as there is a node (temp != NULL).
  * For each iteration, the function checks if the current count matches the desired index. 
  * If they are equal, it means we have reached the node to be deleted, and the function proceeds with deletion.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *new = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (count == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}

		temp = temp->next;
		count++;
	}

	return (-1);
}
