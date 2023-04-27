#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: this is the character to be checked
 * Return:return 1 for lowecase otherwise 0
 */

int print_last_digit(int c)
{
	int lastd;

	lastd = c % 10;
	if (c < 0)
	{
		lastd = lastd * -1;
	}
	_putchar(lastd + '0');
	return (lastd);
	return (0);
}
