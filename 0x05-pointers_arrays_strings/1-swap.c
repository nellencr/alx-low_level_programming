#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: an integer input
 * @b: an input integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
