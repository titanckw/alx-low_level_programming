#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string whose length is to be returned
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
