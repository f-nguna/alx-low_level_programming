#include "main.h"

/**
 * _islower - identifies if a character is uppercase or lowercase
 * @c: this is the character to be checked
 * Return:return 1 for lowecase otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
