#include "lists.h"

/**
 * print_listint - Prints the integer values of nodes in a linked list
 * @h: Pointer to the header node of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t total_nodes = 0;
	const listint_t *temp;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp != NULL)
	{
		print_num(temp->n);
		temp = temp->next;
		total_nodes++;
	}
	return (total_nodes);
}

/**
 * print_num - Prints a number
 * @num: The numerical value to be printed
 *
 * Return: Nothing
 */
void print_num(int num)
{
	int i = 0;
	char temp_arr[32];

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num >= 0 && num <= 9)
	{
		_putchar(num + '0');
	}
	else
	{
		while (num)
		{
			temp_arr[i] = (num % 10) + '0';
			num /= 10;
			i++;
		}
		while (i)
			_putchar(temp_arr[--i]);
	}
	_putchar('\n');
}
