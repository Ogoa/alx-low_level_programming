#include "lists.h"

/**
 * listint_len - Evaluates the number of nodes in a linked list
 * @h: Pointer to the head node of a linked list
 *
 * Return: The number of nodes in a linked list
 * 0 if 'h' has a NULL reference
 */
size_t listint_len(const listint_t *h)
{
	size_t total_nodes = 0;
	const listint_t *temp;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp != NULL)
	{
		total_nodes++;
		temp = temp->next;
	}
	return (total_nodes);
}
