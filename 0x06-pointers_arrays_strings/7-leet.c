#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int a, b;

	char *A = "aAeEoOtTlL";
	char *B = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == A[b])
			{
				s[a] = B[b];
			}
		}
	}

	return (s);
}

