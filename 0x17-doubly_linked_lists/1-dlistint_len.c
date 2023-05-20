#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * dlistint - count number of node
 * @h: pointer
 * Return: number of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
