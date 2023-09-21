#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Pointer to a pointer pointing to the head node of the list
 * @str: Pointer to the string being duplicated
 *
 * Return: The address of the new element
 * NULL if the function failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	new_node->str = _strdup(str);
	new_node->len = str_length(str);
	*head = new_node;
	return (*head);
}

/**
 * str_len - Evaluates the length of a string
 * @str: Pointer to the memory location of the string
 *
 * Return: The length of the string
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
 * _strdup - Duplicates a string
 * @str: Pointer to the string being duplicated
 *
 * Return: The address of the memory block allocated for the duplicated string
 */
char *_strdup(const char *str)
{
	char *str_ptr = NULL;
	int n; /* Length of the string */
	int i = 0;

	if (str == NULL)
		return (NULL);
	n = str_length(str);
	str_ptr = malloc((sizeof(char) * n) + 1);
	if (str_ptr == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		*(str_ptr + i) = *(str + i);
		i++;
	}
	*(str_ptr + i) = '\0';
	return (str_ptr);
}
