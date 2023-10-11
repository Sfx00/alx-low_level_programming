#include "3-calc.h"

/**
 * main - program that perfroms simple operations.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int arrg1, arrg2, resul;
	char a;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arrg1 = atoi(argv[1]);
	arrg2 = atoi(argv[3]);

	fun = get_op_func(argv[2]);

	if (!fun)
	{
		printf("Error\n");
		exit(99);
	}

	a = *argv[2];

	if ((a == '/' || a == '%') && arrg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	resul = fun(arrg1, arrg2);

	printf("%d\n", resul);

	return (0);
}
