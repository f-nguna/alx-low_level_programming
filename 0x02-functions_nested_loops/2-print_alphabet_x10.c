#include "main.h"

/**
 * print_alphabet_x10 - prints the lower case alphabets
 * Return: void
 */

void print_alphabet_x10(void)
{
	int k = 0;

	while (k < 10)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		k++;
	}
}
