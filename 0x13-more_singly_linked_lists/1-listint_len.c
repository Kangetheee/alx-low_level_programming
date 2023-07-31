#include <stdio.h>
#include "lists.h"

/**
  * listint_len - Counts the elements in a linked list
  * @x: The head of the linked list
  *
  * Return: The number of elements in a linked list
  */
size_t listint_len(const listint_t *x)
{
	int count = 0;

	if (x != NULL)
	{
		while (x)
		{
			x = x->next;
			count++;
		}
	}

	return (count);
}
