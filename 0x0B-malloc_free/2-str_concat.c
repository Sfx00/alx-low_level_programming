#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int a = 0, b = 0, c = 0, d = 0;

	while (s1 && s1[c])
		c++;
	while (s2 && s2[d])
		d++;

	p = malloc(sizeof(char) * (c + d + 1));
	if (p == NULL)
		return (NULL);

	a = 0;
	b = 0;

	if (s1)
	{
		while (a < c)
		{
			p[a] = s1[a];
			a++;
		}
	}
