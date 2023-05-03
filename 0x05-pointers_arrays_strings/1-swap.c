#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: parameter
 * @b: parameter
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int numb = *a;

	*a = *b;
	*b = numb;
}
