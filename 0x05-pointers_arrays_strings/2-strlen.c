#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: parameter
 * Return: nothing
 */

int _strlen(char *s)
{
	int count, set;

	set =0;
	for (count = 0; s[count] != '\0'; count++)
		set++;
	return (set);
}
