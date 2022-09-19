#include "main.h"

/**
 * _strlen -  function that returns the length of a string
 * @s: input char
 * Return: nothing
 */
int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
