#include "lists.h"

/**
 * add_nodeint_end - Appends a new node to the tail of a singly linked list
 * @head: Pointer to a pointer containing the address of the head node
 * @n: Value used to populate the integer value field of the node
 *
 * Return: The address of the new element or NULL if the function failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
