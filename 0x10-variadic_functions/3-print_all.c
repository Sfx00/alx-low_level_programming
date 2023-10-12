#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	int a = 0;

	char *s, *se = "";

	va_list argv;

	va_start(argv, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", se, va_arg(argv, int));
					break;
				case 'i':
					printf("%s%d", se, va_arg(argv, int));
					break;
				case 'f':
					printf("%s%f", se, va_arg(argv, double));
					break;
				case 's':
					s = va_arg(argv, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", se, s);
					break;
				default:
					a++;
					continue;
			}
			se = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(argv);
}
