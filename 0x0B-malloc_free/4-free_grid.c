#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - function for freeing the 2D array grid created
 * @grid: grid to be freed
 * @height: height of the grid
 * Return: always 0
 */
void free_grid(int **grid, int height)
{
	int p;

	for (p = 0; p < height; p++)
	{
		free(grid[p]);
	}
	free(grid);
}
