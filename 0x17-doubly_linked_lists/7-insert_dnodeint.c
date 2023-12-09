#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 * @h: Address of the pointer to the head node of the list
 * @idx: Index of the list where the new node should be inserted
 * @n: Data value of the new node
 *
 * Return: Address of the new node, otherwise NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (!*h || !h) /* If the list is empty */
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node) /* Check if malloc failed or was successful */
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = temp;
		if (temp)
			temp->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (temp)
	{
		if (i == idx - 1)
		{
			if (!temp->next)
			{
				temp->next = new_node;
				new_node->prev = temp;
				return (new_node);
			}
			new_node->prev = temp;
			new_node->next = temp->next;
			temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}
	free(new_node); /* Free node if insertion is not successful */
	return (NULL);
}
