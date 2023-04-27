#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: this is the character to be checked
 * Return:return 1 for digits other wise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 57)
		return (1);
	else
		return (0);
}
