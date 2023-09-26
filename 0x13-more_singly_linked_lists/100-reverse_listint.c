#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to a pointer containing the address of the head node
 *
 * Return: Address of the first node of the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1 = *head;
	listint_t *temp2 = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	while (*head)
	{
		temp1 = (*head)->next;
		(*head)->next = temp2;
		temp2 = *head;
		*head = temp1;
	}
	*head = temp2;
	return (*head);
}
