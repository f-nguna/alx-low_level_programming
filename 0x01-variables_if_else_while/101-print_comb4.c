#include <stdio.h>

/**
 * main - Shows the start of the code
 * Return: 0 if th code success. otherwiser no success
 */

int main(void)
{
	int i, j, k;
	int ch = ',';
	int sp = ' ';

	for (k = 0; k < 10; k++)
	{
		i = k + 1;
		for ( ; i < 10; i++)
		{
			j = i + 1;
			for ( ; j < 10; j++)
			{
				putchar('0' + k);
				putchar('0' + i);
				putchar('0' + j);
				if (k + i + j < 24)
				{
					putchar(ch);
					putchar(sp);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
