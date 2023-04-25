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
	int lastnumb;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnumb = n % 10;

	if (lastnumb > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnumb);
	if (lastnumb < 6 && lastnumb != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnumb);
	if (lastnumb == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastnumb);

	return (0);
}
