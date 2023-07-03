#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid
* @grid: pointer to the grid
* @height: colums of the grid
*
* Return: nothing
*/
void free_grid(int **grid, int height)
{
int j;
if (grid != NULL && height > 0)
{
	for (j = 0; j < height; j++)
	{
	free(grid[j]);
	}
}
free(grid);
}
