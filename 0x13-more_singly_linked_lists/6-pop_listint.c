#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: double pointer
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
