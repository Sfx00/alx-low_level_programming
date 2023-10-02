#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
 
int main(int argc, char *argv[])
{
	int Num1, Num2, Prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	Num1 = atoi(argv[1]);
	Num2 = atoi(argv[2]);
	Prod = Num1 * Num2;

	printf("%d\n", Prod);

	return (0);
}