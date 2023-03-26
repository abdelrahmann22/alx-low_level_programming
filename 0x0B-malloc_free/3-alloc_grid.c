#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i , j;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (i--; i>= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height ; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
