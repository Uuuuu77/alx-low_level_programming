#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a previously 2 dimentional grid.
 * @grid: input previously 2 dimentional grid
 * @height: input height
 * Return: nothing (success)
*/
void free_grid(int **grid, int height)
{
	int fr;

	for (fr = 0; fr < height; fr++)
	{
		free(grid[fr]);
	}
	free(grid);
}
