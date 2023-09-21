#ifndef LISTS_H
#define LISTS_H

int _putchar(char c);

/**
 * struct list_s - Structure defining the node of a singly linked list
 * @str: A string data component of the node
 * @len: An integer data component of the node; indicating the
 * length of the string
 * @next: A pointer to the next node of the linked list
 *
 * Description: A singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
void print_str(char *str, unsigned int len);
size_t list_len(const list_t *h);

#endif /* #ifndef LISTS_H */
