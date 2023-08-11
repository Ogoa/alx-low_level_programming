#include <stdio.h>

/**
 * main - Entry point of the program
 * @prefix: The string at the beginning of each sentence
 * @suffix: The string at the end of each sentence
 *
 * Return: always 0 (Successful exit)
 */
int main(void)
{
	char[] prefix = "Size of", suffix = "byte(s)\n";

	printf("%s a char: %zu %s", prefix, sizeof(char), suffix);
	printf("%s an int: %zu %s", prefix, sizeof(int), suffix);
	printf("%s a long int: %zu %s", prefix, sizeof(long int), suffix);
	printf("%s a long long int: %zu %s", prefix, sizeof(long long int), suffix);
	printf("%s a float: %zu %s", prefix, sizeof(float), prefix);
	return (0);
