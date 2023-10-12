#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters.
 * @n: number of arguments passed to the function.
 *
 * Return: the resulting sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;

	int s = 0;

	va_list argv;

	va_start(argv, n);

	for (a = 0; a < n; a++)
		s += va_arg(argv, int);

	va_end(argv);

	return (s);
}
