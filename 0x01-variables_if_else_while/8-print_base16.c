#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase with new line
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	char l;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (l = 'a'; l < 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
