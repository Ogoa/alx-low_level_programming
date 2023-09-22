#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @h: A pointer to a linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t total_nodes = 0;
	const list_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		total_nodes++;
	}
	return (total_nodes);
}

/**
 * print_str - Prints a string
 * @str: Pointer to the memory location holding the string
 * @len: Length of the string in a node
 *
 * Return: Nothing
 */
void print_str(char *str, unsigned int len)
{
	int i = 0;

	if (str == NULL)
		return;
	_putchar('[');
	_putchar(len + '0');
	_putchar(']');
	_putchar(' ');
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
