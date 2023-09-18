#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int b = 0, a = 0;

	while (str[b++])
		a++;

	for (b = 0; b < a; b += 2)
		_putchar(str[b]);

	_putchar('\n');
}
