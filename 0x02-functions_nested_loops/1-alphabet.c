#include <main.h>

/**
 * print_alphabet - function to print alphabets
 * Return: th funtion returns the alphabets
 */

void print_alphabet(void);
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);

	putchar('\n');
	return (i);
}
