#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: Nothing
 */
void rev_string(char *s)
{
	int length = 0, i = 0;
	char rev;

	while (s[length] != '\0')
	{
		length++;
	}
	while (i < length--)
	{
		rev = s[i];
		s[i++] = s[length];
		s[length] = rev;
	}
}
