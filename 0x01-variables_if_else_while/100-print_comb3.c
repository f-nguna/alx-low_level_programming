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

	for (i = 0; i < 10; i++)
	{
		j = i + 1;
		for ( ; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i + j < 17)
			{
			putchar(ch);
			putchar(sp);
			}
		}
	}
		putchar('\n');
	return (0);
}
