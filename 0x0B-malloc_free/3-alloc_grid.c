#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 *alloc_grid - 2 gridensional array of intergers
 *@width: 1st array
 *@height: 2nd stray
 *Return: always 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = malloc(sizeof(int)*height);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
			
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
