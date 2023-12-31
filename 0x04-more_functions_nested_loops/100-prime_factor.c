#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long a = 612852475143, b;

	while (b < (a / 2))
	{
		if ((a % 2) == 0)
		{
			a /= 2;
			continue;
		}

		for (b = 3; b < (a / 2); b += 2)
		{
			if ((a % b) == 0)
				a /= b;
		}
	}

	printf("%ld\n", a);

	return (0);
}
