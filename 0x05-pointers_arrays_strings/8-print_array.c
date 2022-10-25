#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: string
 * @n: number of string elements to print
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}
