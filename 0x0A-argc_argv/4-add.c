#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int numb, digite, sume = 0;

	for (numb = 1; numb < argc; numb++)
	{
		for (digite = 0; argv[numb][digite]; digite++)
		{
			if (argv[numb][digite] < '0' || argv[numb][digite] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sume += atoi(argv[numb]);
	}

	printf("%d\n", sume);

	return (0);
}
