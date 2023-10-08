#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array.
* @num_items: number of elements.
* @item_size: size of bytes.
*
* Return: pointer to the allocated memory.
* if num_items or item_size is 0, returns NULL.
* if malloc fails, returns NULL.
*/

void *_calloc(unsigned int num_items, unsigned int item_size)
{
	char *p;

	unsigned int a;

	if (num_items == 0 || item_size == 0)
		return (NULL);

	p = malloc(num_items * item_size);

	if (p == NULL)
		return (NULL);

	for (a = 0; a < (num_items * item_size); a++)
		p[a] = 0;

	return (p);
}

