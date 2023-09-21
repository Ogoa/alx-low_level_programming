#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Appends a new node to the tail of the linked list
 * @head: Pointer to a pointer to the head node of the linked list
 * @str: Pointer to the memory location of the string to be duplicated
 *
 * Return: Address of the new element or NULL if the function failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;

	new_node = malloc(sizeof(list_t));
	if (str == NULL || new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	new_node->len = str_length(str);
	new_node->str = _strdup(str);
	return (new_node);
}

/**
 * str_length - Evaluates the length of a given string
 * @str: Pointer to the memory location of the string being evaluated
 *
 * Return: Length of the string, otherwise 0 if str has a NULL reference
 */
int str_length(const char *str)
{
	int str_length = 0;

	if (str == NULL)
		return (0);
	while (*(str + str_length) != '\0')
		str_length++;
	return (str_length);
}

/**
 * _strdup - Duplicates a given string
 * @str: Pointer to the memory location of the string to be duplicated
 *
 * Return: Address of the memory location allocated to the duplicate string
 */
char *_strdup(const char *str)
{
	int i = 0;
	int n = 0;
	char *dup_str;

	if (str == NULL)
		return (NULL);
	n = str_length(str);
	dup_str = malloc((sizeof(char) * n) + 1);
	if (dup_str == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		*(dup_str + i) = *(str + i);
		i++;
	}
	*(dup_str + i) = '\0';
	return (dup_str);
}
