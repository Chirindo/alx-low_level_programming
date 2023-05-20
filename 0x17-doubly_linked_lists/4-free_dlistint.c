#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dlistint - free list
 * @head: pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp

		while (head)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
}
