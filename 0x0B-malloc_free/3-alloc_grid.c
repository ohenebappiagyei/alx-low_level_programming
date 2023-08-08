#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - A function that returns a pointer
 * to a 2-dimensional array of integers
 * @width: describes the width of the array
 * @height: describes the height of the array
 *
 * Return: Returns the grid
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			/**
			 * free previously allocated memory
			 * and return NULL on memory allocation failure
			*/
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
	}
	return (grid);
}
