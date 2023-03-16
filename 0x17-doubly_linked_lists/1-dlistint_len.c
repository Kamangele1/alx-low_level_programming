#include "lists.h"

/**
 * dlistint_len - Return number of element in linked dlistint_t lists
 * @h : A pointer to the head of the lists
 *
 * Return: The number of nodes in the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
