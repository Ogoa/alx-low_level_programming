#include "lists.h"

/**
 * free_listint2 - Frees memory allocated to an existing linked list and sets
 * the head to NULL
 * @head: Pointer to a pointer containing the address of the head node
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	while (temp)
	{
		*head = (*head)->next;
		free(temp);
		temp = *head;
	}
}
