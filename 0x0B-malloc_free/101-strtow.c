#include <stdlib.h>
#include "main.h"

/**
 * strtow - Splits a string into words
 * @str: The string that is to be split into its individual words
 *
 * Return: Ponter to an array of the strings
 * NULL if str == NULL or ""
 */
char **strtow(char *str)
{
	char **words_ptr;
	int counter = 0; /* Iterator for the array of strings */
	int word_count = 0; /* ...in the overall string */
	int i = 0;
	int length = 0; /* Word length */
	int j;
	char *one_word;

	if (str == NULL || *str == '\0')
		return (NULL);
	word_count = no_of_words(str);
	words_ptr = malloc(sizeof(char *) * (word_count + 1));
	if (words_ptr == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		if (*(str + i) == ' ')
		{
			i++;
			continue;
		}
		length = word_length((str + i));
		one_word = malloc(sizeof(char) * (length + 1));
		if (one_word == NULL)
			return (NULL);
		for (j = 0; j < length; j++, i++)
		{
			*(one_word + j) = *(str + i);
		}
		*(one_word + j) = '\0';
		words_ptr[counter] = one_word;
		counter++;
	}
	words_ptr[counter] = NULL;
	return (words_ptr);
}

/**
 * no_of_words - Evaluates the number of words in the overall string
 * @str: The overall string being evaluated
 *
 * Return: The number of words in the string
 */
int no_of_words(char *str)
{
	int no_of_words = 0;
	int i = 0;

	while (*(str + i) != '\0')
	{
		while (*(str + i) == ' ') /* Skip spaces */
			i++;
		if (*(str + i) != '\0')
			no_of_words++;
		while (*(str + i) != ' ' && *(str + i) != '\0')
			i++;
	}
	return (no_of_words);
}

/**
 * word_length - Evaluates the number of characters in a word
 * @str: Pointer to the initial overall string
 *
 * Return: The length of the current word in the string
 */
int word_length(char *str)
{
	int length = 0;

	while (*(str + length) != ' ' && *(str + length) != '\0')
		length++;
	return (length);
}
