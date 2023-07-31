#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - ...
  * @head
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head);
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		return;/*
			  *If the list is empty, return without doing anything
			  */
	}

	free(*head);
	head = 0;
}
