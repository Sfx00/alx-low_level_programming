#include <stdio.h>

/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 *        Fizz is printed instead of the number, for multiples of five,
 *        Buzz, and for multiples of both three and five, FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3) == 0 && (a % 5) == 0)
			printf("FizzBuzz");

		else if ((a % 3) == 0)
			printf("Fizz");

		else if ((a % 5) == 0)
			printf("Buzz");

		else
			printf("%d", a);

		if (a == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
