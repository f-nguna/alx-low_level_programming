#include "main.h"

/**
 * print_alphabet - prints the lower case alphabets
 * Return: void
 */
void print_alphabet_x10(void)
{
	int k;
	k = 0;

	while (k < 10)
	{
		char i;
	
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	
		_putchar('\n');
		k++;
	}
}
