#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - a function that returns a pointer to a newly created
 *2 dimensional integer grid
 *@width: The width of the grid
 *@height: The height of the grid
 *Return: Null if it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, a;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (a = 0; a < width; a++)
			grid[i][a] = 0;
	return (grid);
}
