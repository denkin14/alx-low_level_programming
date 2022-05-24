#include "lists.h"
/**
 * add_node - will add a new node at the beginning of list_t list.
 * @head: the head of the linked list.
 * @str: the string to store in the list
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t dk;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (dk = 0; str[dk]; dk++)
		;

	new->len = dk;
	new->next = *head;
	*head = new;

	return (*head);
}
