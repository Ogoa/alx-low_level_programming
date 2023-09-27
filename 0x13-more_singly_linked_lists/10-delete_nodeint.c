#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index of an existing
 * linked list
 * @head: Pointer to a pointer containing the address of the head node
 * @index: The specified index of the node to be deleted
 *
 * Return: 1 on success, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp1 = *head;
	listint_t *temp2 = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp1 = *head;
		*head = (*head)->next;
		free(temp1);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (temp1 == NULL || temp1->next == NULL)
			return (-1);
		temp1 = temp1->next;
	}
	temp2 = temp1->next;
	if (temp2 == NULL)
		return (-1);
	temp1->next = temp1->next->next;
	free(temp2);
	return (1);
}
