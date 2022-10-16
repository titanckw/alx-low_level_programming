#include <stdio.h>

/**
 * main - Prints alphabet in lowercase followed by new line
 *
 * Return: Always 0
 */

char main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
		return (0);
}
