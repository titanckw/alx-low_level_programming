#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @a: integer whose last digit is to be printed
 * Return: Prints last digits
 */

int print_last_digit(int a)

{
	int i = a % 10;
	int b;

	if (a < 0)
	{
		b = i * -1;
	}
	else
	{
		b = i;
	}
	_putchar(b + '0');
	return (b);
}
