#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **app;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	app = (int **) malloc(sizeof(int *) * height);

	if (app == NULL)
		return (NULL);

	for (a = 0; i < height; a++)
	{
		app[a] = (int *) malloc(sizeof(int) * width);
		if (app[a] == NULL)
		{
			free(app);
			for (b = 0; b <= a; b++)
				free(arr[b]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			app[a][b] = 0;
		}
	}
	return (app);
}
