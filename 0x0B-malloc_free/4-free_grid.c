#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - function
 *@grid: grid array
 *@height:height of grid
 *Description: frees a 2 dimensionals grid
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
			grid[i] = 0;
		}
		free(grid);
		grid = 0;
	}
}
