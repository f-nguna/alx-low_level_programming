#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: this is the character to be checked
 * Return:return 1 for positive , 0 for o and -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
