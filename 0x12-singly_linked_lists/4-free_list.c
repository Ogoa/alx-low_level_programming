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

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
