#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Creates and initialises a 2-D array of integers
 * @width: The number of columns
 * @height: The number of rows
 *
 * Return: A pointer to the 2-D array
 * NULL if either the width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int rows;
	int cols;
	int **array_ptr;

	if (width <= 0 || height <= 0)
		return (0);
	array_ptr = malloc(sizeof(int *) * height);
	if (array_ptr == NULL)
		return (NULL);
	for (rows = 0; rows < height; rows++)
	{

		array_ptr[rows] = malloc(sizeof(int) * width);
		if (array_ptr[rows] == NULL)

		{
			for (cols = 0; cols < rows; cols++)
			{
				free(array_ptr[cols]);
			}
			free(array_ptr);
			return (NULL);
		}
		for (cols = 0; cols < width; cols++)
		{
			array_ptr[rows][cols] = 0;
		}
	}
	return (array_ptr);
}
