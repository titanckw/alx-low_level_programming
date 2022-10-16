#include <stdio.h>

/**
 * main - Prints single digit numbers of base 10 from 0 followed by new line
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);

	printf("\n");

	return (0);
}
