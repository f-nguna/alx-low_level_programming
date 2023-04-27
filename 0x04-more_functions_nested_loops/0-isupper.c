#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: this is the character to be checked
 * Return:return 1 foruppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
