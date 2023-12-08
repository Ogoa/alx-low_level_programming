#include "lists.h"

/**
 * dlistint_len - Evaluates the number of elements in a
 * doubly linked list
 * @h: Pointer to the head node of the list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t total_nodes = 0;

	if (!h)
		return (0);
	temp = h;
	while (temp)
	{
		total_nodes++;
		temp = temp->next;
	}
	return (total_nodes);
}
