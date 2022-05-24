#include "lists.h"
/**
 * print_list - will print all elements at list_t
 * @h: singly linked list
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t dk;
	dk = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		dk++;
	}
	return (dk);
}
