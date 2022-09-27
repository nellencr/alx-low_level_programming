#include "main.h"
/**
 *_memset -  a function that fills memory with a constant byte.
 * @s: location to fill.
 * @b: Value to be filled.
 * @n: Number of bytes to be filled starting from s to be filled.
 *Return: the memset function returns the value of s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (p);
}
