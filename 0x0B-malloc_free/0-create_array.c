#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		ptr[a] = c;

	return (ptr);
}
