#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Shows the start of the code
 * Return: 0 if th code success. otherwiser no success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
	return (0);
}
