#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * sum_dlistint - sum of nodes
 * @head: pointer
 * Return: sum
 */


int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node;

	node = head;

	if (head == NULL)
	{
		return (0);
	}
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
