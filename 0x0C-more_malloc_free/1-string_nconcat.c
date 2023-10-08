#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a = 0, b = 0, Len1 = 0, Len2 = 0;

	while (s1 && s1[Len1])
		Len1++;
	while (s2 && s2[Len2])
		Len2++;

	if (n < Len2)
		p = malloc(sizeof(char) * (Len1 + n + 1));
	else
		p = malloc(sizeof(char) * (Len1 + Len2 + 1));

	if (!p)
		return (NULL);

	while (a < Len1)
	{
		p[a] = s1[a];
		a++;
	}

	while (n < Len2 && a < (Len1 + n))
		p[a++] = s2[b++];

	while (n >= Len2 && a < (Len1 + Len2))
		p[a++] = s2[b++];

	p[a] = '\0';

	return (p);
}
