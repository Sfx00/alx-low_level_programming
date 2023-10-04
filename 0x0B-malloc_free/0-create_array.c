#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of chars.
 * and initializes it with a specific char.
 * @size: size of the array to create.
 * @c: char to initialize the array c.
 *
 * Return: pointer to the array, NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *p;
	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (a < size)
	{
		*(p + a) = c;
		a++;
	}

	*(p + a) = '\0';

	return (p);
}