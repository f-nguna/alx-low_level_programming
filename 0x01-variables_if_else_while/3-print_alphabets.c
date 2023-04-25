#include <stdio.h>

/**
 * main - Shows the start of the code
 * Return: 0 if th code success. otherwiser no success
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		printf("%c", i);
	for (i = 65; i <= 90; i++)
		printf("%c", i);

	printf("\n");
	return (0);
}
