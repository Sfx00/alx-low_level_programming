#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 *
 * @a : array.
 * @size : size of the square matrix.
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, j, k;
	int l = 0, m = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		l += *(a + k);
	}
	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		m += *(a + k);
	}
	printf("%i, %i\n", l, m);
}
