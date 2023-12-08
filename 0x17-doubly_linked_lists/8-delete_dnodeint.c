#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Address of the pointer to the head node of the list
 * @index: Index of the node to be deleted from the list
 *
 * Return: 1 on success, otherwise -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (!*head || !head)
		return (-1);
	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			if (temp->prev)
				temp->prev->next = temp->next;
			else
				*head = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
