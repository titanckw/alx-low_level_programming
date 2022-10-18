#include "main.h"

/**
 * print_sign - Prints sign of a number
 * @n: prints positive or negative number
 *
 * Return: Always 1 if n>0, 0 n\\==0, -1<0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
