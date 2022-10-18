#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: A letter that's lowercase or uppercase
 *
 * Return: 1 (success), 0 (otherwise)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
