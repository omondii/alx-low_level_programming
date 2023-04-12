#include "main.h"
#include <stdlib.h>
/**
 *free_grid - frees the space
 *@grid: grid allocated space in 3-alloc_grid.c
 *@height: rows of grid
 *Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
