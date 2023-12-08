#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data (n) of a doubly linked list
 * @head: Pointer to the head node of the list
 *
 * Return: Sum of all data of the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
