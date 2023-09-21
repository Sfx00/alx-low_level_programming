#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int A, B, C;

	B = n - 1;

	for (A = 0; A < n / 2; A++)
	{
		C = a[A];
		a[A] = a[B];
		a[B--] = C;
	}
}
