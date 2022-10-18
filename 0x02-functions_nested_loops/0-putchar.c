#include "main.h"

/**
 * main - writes the character c to stdout
 *
 * Return: On success 0
 */

int main(void)
{
	char txt[9] = "_putchar";
	int i;


	for (i = 0; i < 8; i++)
	{

		_putchar(txt[i]);
	}
	_putchar('\n');
	return (0);
}

