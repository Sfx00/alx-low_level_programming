#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int numb i, resulte
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numb = atoi(argv[1]);
	resulte = 0;

	if (numb < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && numb >= 0; i++)
	{
		while (numb >= coin[i])
		{
			resulte++;
			numb -= coin[i];
		}
	}

	printf("%d\n", resulte);
	return (0);
}
