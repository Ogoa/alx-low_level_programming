#include "lists.h"

/**
 * free_listint - Frees the memory allocated to an existing linked list
 * @head: Pointer to the head node of the linked list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
		return;
	while (temp)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
