#include "lists.h"


/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: A pointer to the of the lists
 *
 * Return: The number of the nodes inthe lists
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		print("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
