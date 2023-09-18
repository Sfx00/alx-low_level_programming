#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int b = 0, a = 0, c;

	while (str[b++])
		a++;

	if ((a % 2) == 0)
		c = a / 2;

	else
		c = (a + 1) / 2;

	for (b = c; b < a; b++)
		_putchar(str[b]);

	_putchar('\n');
}
