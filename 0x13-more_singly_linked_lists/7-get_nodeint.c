#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node of a linked list
 * @head: Pointer to the head node of the linked list
 * @index: The index of the node being looked for
 *
 * Return: Address of the nth node if it exists, otherwise return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
