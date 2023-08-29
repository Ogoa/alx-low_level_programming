#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: The pointer to the string to be changed
 * @to: The pointer to the string being assigned to 's'
 */
void set_string(char **s, char *to)
{
	*s = to;
}
