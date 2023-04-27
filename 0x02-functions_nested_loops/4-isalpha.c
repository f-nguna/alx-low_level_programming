#include "main.h"

/**
 * _isalpha - identifies if a character is uppercase or lowercase
 * @c: this is the character to be checked
 * Return:return 1 for lowecase and uppercase otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
