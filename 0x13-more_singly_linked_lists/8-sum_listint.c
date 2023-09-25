#include "lists.h"

/**
 * sum_listint - Evaluates the sum of the data values of nodes in an existing
 * linked list
 * @head: Pointer to the head node of the linked list
 *
 * @Return: Sum of the data values of all nodes, otherwise return
 * 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
