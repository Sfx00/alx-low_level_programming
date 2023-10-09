#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers.
* @start: minimum value.
* @end: maximum value.
*
* Return: pointer to the newly created array.
* if end > start, returns NULL.
* if malloc fails, returns NULL.
*/

int *array_range(int start, int end)
{
	int *array;

	int a;

	if (start > end)
		return (NULL);

	array = malloc(sizeof(*array) * ((end - start) + 1));

	if (array == NULL)
		return (NULL);

	for (a = 0; start <= end; a++, start++)
		array[a] = start;

	return (array);
}
