#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: this is the character to be checked
 * Return: 0 if the code is success
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abV;

		abV = c * -1;
		return (abV);
	}
	else if (c > 0)
		return (c);
	else if (c == 0)
		return (0);
	return (0);
}
