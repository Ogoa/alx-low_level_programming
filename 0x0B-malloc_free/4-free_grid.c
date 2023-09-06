#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory that has been allocated to a 2 dimensional grid
 * @grid: Pointer to the 2D array
 * @height: The number of rows in the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
