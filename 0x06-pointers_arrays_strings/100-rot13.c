#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int a, b;

	char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char B[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; a[b] != '\0'; b++)
		{
			if (s[a] == A[b])
			{
				s[a] = B[b];
				break;
			}
		}
	}

	return (s);
}
