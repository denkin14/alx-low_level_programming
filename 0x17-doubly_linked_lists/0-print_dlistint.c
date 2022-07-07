#include "lists.h"

/**
 * print_dlistint - function prints all the elements of 
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int my_count;
	my_count = 0;

	if (h == NULL)
		return (my_count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		my_count++;
		h = h->next;
	}

	return (my_count);
}
