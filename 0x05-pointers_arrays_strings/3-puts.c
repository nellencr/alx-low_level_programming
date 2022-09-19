#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: input char
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
}
