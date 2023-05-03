#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @s: parameter
 * Return: nothing
 */

void print_rev(char *s)
{
	int numb1, numb2;

	numb1 = _strlen(s);
	for (numb2 = numb1 - 1; numb2 >= 0; numb2--)
		_putchar(s[numb2]);
	_putchar('\n');
}

/**
 * _strlen - a function that returns the length of a string
 * @s: parameter
 * Return: nothing
 */

int _strlen(char *s)
{
	int count, set;

	set = 0;
	for (count = 0; s[count] != '\0'; count++)
		set++;
	return (set);
}
