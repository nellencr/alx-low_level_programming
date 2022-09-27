#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: an array where src will be copied to
 * @src: the string to be copied.
 * @n: the number of characters to copy.
 * Return: the memcpy function returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *d = dest;
	char *s = src;

	for (i = 0; i < n; i++)
		d[i] = s[i];
	return (dest);
}
