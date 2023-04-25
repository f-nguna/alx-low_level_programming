#include <stdio.h>

/**
 * main - Shows the start of the code
 * Return: 0 if th code success. otherwiser no success
 */

int main(void)
{
	int i, j, l, m;
	int ch = ',';
	int sp = ' ';

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (l = i; l < 10; l++)
			{
				m = j + 1;
				for (m = 0; m < 10; m++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(sp);
					putchar('0' + l);
					putchar('0' + m);
					if (i + j + l + m < 35)
					{
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
