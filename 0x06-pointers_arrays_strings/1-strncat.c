#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int L, M;

	L = 0;
	M = 0;

	while (dest[L] != '\0')
		L++;

	while (src[M] != '\0' && M < n)
	{
		dest[L] = src[M];
		L++;
		M++;
	}

	dest[L] = '\0';

	return (dest);
}

