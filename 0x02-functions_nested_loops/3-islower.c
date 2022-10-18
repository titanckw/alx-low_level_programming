#include "main.h"
/**
 * islower - Checks for lowercase characters
 * @c: Prints lowercase character
 * Return: Always 1 (Success), 0 otherwise
 */

int islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
