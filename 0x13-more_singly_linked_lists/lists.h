#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * struct listint_s - Singly linked list
 * @n: Integer value of a node
 * @next: Pointer to the next node in the linked list
 *
 * Description: Structure defining the node of a singly linked
 * list that has an integer data value and a pointer to the next
 * node in the linked list, if any
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
void print_num(int num);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

#endif /* ifndef LISTS_H */
