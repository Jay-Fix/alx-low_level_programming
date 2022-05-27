#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temP;

	if (head == NULL)
		return;

	while (*head)
	{
		temP = (*head)->next;
		free(*head);
		*head = temP;
	}

	*head = NULL;
}
