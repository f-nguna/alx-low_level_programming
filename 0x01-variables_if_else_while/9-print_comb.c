#include <stdio.h>

/**
 * main - Shows the start of the code
 * Return: 0 if th code success. otherwiser no success
 */

int main(void)
{
	int i;
	int ch = ',';
	int sp = ' ';

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(ch);
			putchar(sp);
		}
	}

	putchar('\n');
	return (0);
}
