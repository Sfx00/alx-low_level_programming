#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int A;

	for (A = 0; s[A] != '\0'; A++)
	{
		if (s[A] >= 'a' && s[A] <= 'z')
			s[A] = s[A] - 32;
	}

	return (s);
}
