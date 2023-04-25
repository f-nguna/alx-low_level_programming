#include <stdio.h>

/**
 * main - Shows the start of the code
 * Return: 0 if th code success. otherwiser no success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + 1);
	for (i = 97; i <= 102; i++)
		putchar('a' + 1);

	putchar('\n');
	return (0);
}
