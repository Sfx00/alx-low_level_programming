#include "main.h"
/**
* string_nconcat - concatenates two strings.
* @str1: first string.
* @str2: second string.
* @n: amount of bytes.
*
* Return: pointer to the allocated memory.
* if malloc fails, status value is equal to 98.
*/
char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	char *resu;
	unsigned int Len1, Len2, Result_Len, a;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	for (Len1 = 0; str1[Len1] != '\0'; Len1++)
		;

	for (Len2 = 0; str2[Len2] != '\0'; Len2++)
		;

	if (n > Len2
		n = Len2;

	Result_Len = Len1 + n;

	resu = malloc(Result_Len + 1);

	if (resu == NULL)
		return (NULL);

	for (a = 0; a < Result_Len; a++)
		if (a < Len1)
			resu[a] = str1[a];
		else
			resu[a] = str2[a - Len1];

	resu[a] = '\0';

	return (resu);
}
