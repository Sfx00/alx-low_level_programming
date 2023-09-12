#include <stdio.h>
#include <stdlib.h>
/**
 * main - The main function of the program.
 *
 * This function is the entry point of the program. It returns an integer
 * value to indicate the program's exit status.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char n[8] = {95, 112, 117, 116, 99, 104, 97, 114};
for (int i = 0 ; i < 8 ; i++)
{
	putchar(n[i]);
}
return (0);
}
