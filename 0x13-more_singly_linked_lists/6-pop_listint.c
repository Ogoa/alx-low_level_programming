#include "lists.h"

/**
 * pop_listint - Deletes the head node of an existing linked list
 * @head: Pointer to the pointer holding the address of the head node
 *
 * Return: The integer data value of the node
 * 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
