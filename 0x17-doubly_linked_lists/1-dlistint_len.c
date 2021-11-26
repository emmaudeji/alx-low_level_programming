#include "lists.h"

/**
 * dlistint_len: checks the number of elements in the list
 * @h: pointer to the head of the linked list
 *
 * Return: the number of elements in the dlistint_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count_nodes = 0;
	
	while (h)
	{
		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}
