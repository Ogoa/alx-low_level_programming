#include "lists.h"

/**
 * add_nodeint - Inserts a new node at the beginning of a singly linked list
 * @head: Pointer to a pointer holding the address of the head node
 * n: The value to be used to populate the integer value of the node
 *
 * Return: The address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

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
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
