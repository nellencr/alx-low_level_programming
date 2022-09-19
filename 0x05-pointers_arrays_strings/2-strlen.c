#include "main.h"
#include <stdio.h>

/**
 * _strlen -  function that returns the length of a string
 * @s: input char
 * Return: nothing
 */
int _strlen(char *s)
{
	int len;
	int count = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
		count++;
	}
	return (len);
}
