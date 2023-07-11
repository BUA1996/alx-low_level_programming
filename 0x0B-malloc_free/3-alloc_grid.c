#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function for printing pointer to 2D array
 * @height: is the height of the array
 * @width: is the width of the array
 * Return: null on failure
 */
int **alloc_grid(int width, int height)
{
	int p, q;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < height; p++)
	{
		grid[p] = malloc(sizeof(int) * width);
		if (grid[p] == NULL)
		{
			for (; p >= 0; p--)
			{
				free(grid[p]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (p = 0; p < height; p++)
	{
		for (q = 0; q < width; q++)
		{
			grid[p][q] = 0;
		}
	}
	return (grid);
}
