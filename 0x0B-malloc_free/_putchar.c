#include <unistd.h>

/**
 * _putchar - Prints a character onto the console screen
 * @c: Character to be printed
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
