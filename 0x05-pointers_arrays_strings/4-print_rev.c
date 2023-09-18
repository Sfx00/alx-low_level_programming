#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int a = 0, b = 0;

	while (s[b++])
		a++;

	for (b = a - 1; b >= 0; b--)
		_putchar(s[b]);

	_putchar('\n');
}
