#includ "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline.
 *
 * This function prints all lowercase letters of the English alphabet in order,
 * followed by a newline character '\n'.
 */
void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
		putchar(alp[i]);

	putchar('\n');

	return (0);
}
