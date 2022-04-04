#include "holberton.h"
#include <stdlib.h>
/**
 *free_grid - Function that frees a 2 dimensional grid
 *@grid: Length of the array.
 *@height:Height of the array.
 *Return: freeing a two dimensional array.
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
