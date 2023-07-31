#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - ...
  * The loop continues as long as there is a node (head != NULL).
  */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
