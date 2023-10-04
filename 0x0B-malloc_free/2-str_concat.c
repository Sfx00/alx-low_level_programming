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
	int i = 0;
	int j = 0;
	int f;
	int g;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	str = malloc(i + j + 1);

	if (str == NULL)
		return (NULL);
	for (f = 0; f < i; f++)
		str[f] = s1[f];
	for (g = i; g < i + j; g++)
		str[g] = s2[g - i];

	str[i + j] = '\0';	/* Add null-terminating character at the end */

	return (str);
}
