#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int byte, a;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}


	array = (char *)main;


	for (a = 0; a < byte; a++)
	{

		if (a == byte - 1)
		{
			printf("%02hhx\n", array[a]);
			break;
		}

		printf("%02hhx ", array[a]);
	}

	return (0);

}
