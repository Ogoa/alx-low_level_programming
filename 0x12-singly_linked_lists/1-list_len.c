#include <stddef.h>
#include "lists.h"

/**
 * list_len - Evaluates the number of elements in a linked list
 * @h: Pointer to a linked list
 *
 * Return: The number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t total_nodes = 0;
	const list_t *temp;

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
