#include "lists.h"

/**
 * dlistint_len: checks the number of elements in the list
 *
 * @head: pointer to the head of the linked list
 *
 * Return: the number of elements in the dlistint_t
 * Description: count the elements by counting the nodes
 */
size_t dlistint_len(const dlistint_t *h);
{
	dlistint_t temp;
	size_t count_nodes = 0;

	temp = h;
	while(temp!=0)
	{
		count_nodes++;
		temp = temp->next;
	}

	return (count_nodes);
}
