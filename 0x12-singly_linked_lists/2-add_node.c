#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_one;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_one = malloc(sizeof(list_t));
	if (!new_one)
		return (NULL);

	new_one->str = strdup(str);
	new_one->len = len;
	new_one->next = (*head);
	(*head) = new_one;

	return (*head);
}
