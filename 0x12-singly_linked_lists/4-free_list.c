#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees the memory allocated to a linked list an its elements
 * @head: Pointer to the head node of the linked list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp = NULL;
	list_t *temp2 = NULL;

	if (head == NULL)
		return;
	temp = head;
	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
}
