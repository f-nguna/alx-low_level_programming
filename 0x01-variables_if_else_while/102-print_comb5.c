#include <stdio.h>

/**
 * main - Shows the start of the code
 * Return: 0 if th code success. otherwiser no success
 */

int main(void)
{
	int i, j;
	int ch = ',';
	int sp = ' ';

	for (i = 0; i < 98; i++)
	{
		for (j = i + 1; j < 99; j++)
		{
			putchar('0' + i);
			putchar(sp);
			putchar('0' + j);
			if (j < 99 && i < 98)
			{
				putchar(ch);
				putchar(sp);
			}
		}
		}
	return (0);
}
