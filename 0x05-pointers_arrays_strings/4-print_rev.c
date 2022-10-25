#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be printed in reverse
 * Return: Nothing
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (length)
	{
		_putchar(s[--length]);
	}
	_putchar('\n');
}
