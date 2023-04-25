#include <stdio.h>

/**
 * main - Shows the start of the code
 * Return: 0 if th code success. otherwiser no success
 */

int main(void)
{
	int i, j, k, l, m;
	int ch = ',';
	int sp = ' ';

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 10; j++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(sp);
				for (l = 0; l < 10; l++)
				{
					for (m = 0; m < 10; m++)
					{
						putchar('0' + l);
						putchar('0' + m);
						putchar(ch);
						putchar(sp);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
