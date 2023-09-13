#include "main.h"

/**
 * _isalpha - function checks for alphabetic character(lowercase or uppercase).
 * @c: The character that be checks.
 *
 * Return: 1 if character lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
