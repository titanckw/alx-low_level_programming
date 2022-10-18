#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @ab: Value of integer
 * Return: Absolute value of ab
 */

int _abs(int ab)
{
	if (ab >= 0)
	{
		return (ab);
	}
	else
	{
		return (ab * -1);
	}
}
