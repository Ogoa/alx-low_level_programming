#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at a given index in an
 * existing linked list
 * @head: Pointer to a pointer holding the address of the head node
 * @idx: The index where the new node is to be inserted
 * @n: The value used to populate the data field of the new node
 *
 * Return: The address of the new node if the operation is successful
 * Otherwise, return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *temp = *head;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || *head == NULL || i > idx)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	while (temp && i < idx)
	{
		temp = temp->next;
		i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
