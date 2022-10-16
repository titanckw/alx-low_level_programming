#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints last digit of a random number stored in the
 * variable n and whether it is greater than 5, less than 6, or 0
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, n % 10);

	if (n > 5)
		printf("%d is greater than 5\n", n);
	else if (n == 0)
		printf("%d is 0\n", n);
	else if (n < 6 && n != 0)
		printf("%d is less than 6 and not 0\n", n);
	return (0);
}
