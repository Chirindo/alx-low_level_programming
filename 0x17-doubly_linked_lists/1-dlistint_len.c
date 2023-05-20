#include "lists.h"

/**
 * dlistint: count number of node
 * @h: pointer
 * Retun: number of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	size t;

	for (i = 0 h != NULL; i++)
		h = h->next;
	return(i);
}
