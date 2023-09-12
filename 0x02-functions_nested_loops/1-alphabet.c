#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
		putchar(alp[i]);

	putchar('\n');
}
/**
 * main - The main function of the program.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
