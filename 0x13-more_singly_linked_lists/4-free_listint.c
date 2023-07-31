#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - Frees a linked list
  * @head: The head of the linked list
  *@head= h
  * Return: Nothing
  */
void free_listint(listint_t *h)
{
	listint_t *temp;

	while (h)
	{
		temp = h;
		h = h->next;
		free(temp);
	}

	free(h);
}
