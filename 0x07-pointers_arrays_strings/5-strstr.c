#include "main.h"
/**
 * _strstr - locates a substring.
 *
 * @haystack : the string.
 * @needle : the substring.
 * Return: pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *j = needle;

	while (*i)
	{
		j = needle;
		i = haystack;

		while (*j)
		{
			if (*i == *j)
			{
				j++;
				i++;
			}
			else
				break;
		}
		if (*j == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
