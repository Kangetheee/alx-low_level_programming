#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  *The loop continues as long as there is a node (head != NULL).
  *For each iteration, the function checks if the current count matches the desired index. If they are equal, it means we have reached the desired node, and the function returns a pointer to that node (return (head)).
  *If the desired index is not found, the function moves to the next node by updating the head pointer to head->next and increments the count.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}
