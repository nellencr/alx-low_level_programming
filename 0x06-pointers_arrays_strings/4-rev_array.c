#include "main.h"
#include <stdio.h>
/**
 * reverse_array- a function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i > n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
