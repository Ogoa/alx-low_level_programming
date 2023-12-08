#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t total_nodes = 0;
	const dlistint_t *temp;

	if (!h)
		return (0);
	temp = h;
	while (temp)
	{
		total_nodes++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (total_nodes);
}
