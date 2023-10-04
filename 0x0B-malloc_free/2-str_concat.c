#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the newly allocated space in memory,
 *         which contains s1, followed by the first n bytes of s2,
 *         and null terminated. If the function fails, it should return NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int a = 0;
	int b = 0;
	int c;
	int d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	str = malloc(a + b + 1);

	if (str == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		str[c] = s1[c];
	for (d = a; d < a + b; d++)
		str[d] = s2[d - a];

	str[a + b] = '\0';

	return (str);
}
