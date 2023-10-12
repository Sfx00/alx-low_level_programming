#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	va_list argv;


	va_start(argv, n);

	for (a = 0; a < n; a++)
	{
		if (!separator)
			printf("%d", va_arg(argv, int));

		else if (separator && a == 0)
			printf("%d", va_arg(argv, int));

		else
			printf("%s%d", separator, va_arg(argv, int));
	}

	va_end(argv);

	printf("\n");
}
