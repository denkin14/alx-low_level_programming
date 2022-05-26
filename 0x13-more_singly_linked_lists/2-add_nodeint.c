#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of linked list
 * @head: the poinetr to the first node in the list
 * @n: data to insert in new node
 *
 * Return: pointer to new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (!current)
		return (NULL);

	current->n = n;
	current->next = *head;
	*head = current;

	return (current);
}
