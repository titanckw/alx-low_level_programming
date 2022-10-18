#include "main.h"

/**
 * main - writes the character c to stdout
 *
 * Return: On success 0
 */

int main(void)
{
	for (int i = 0; i < 8; i++)
	{
		char txt[12] = "_putchar";

		_putchar(txt[i]);
	}
	return (0);
}

