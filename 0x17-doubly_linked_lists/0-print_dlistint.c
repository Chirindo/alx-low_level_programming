#include "list.h"
#include <stdio.h>

/**
 * print_dlistint - prints elements of a dlistint_t list
 * @h: pointer
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
