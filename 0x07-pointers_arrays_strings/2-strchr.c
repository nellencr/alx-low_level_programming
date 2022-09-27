#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: an input string to search in
 * @c: an input character to locate into string s
 * Return: returns pointer to c position
 */

char *_strchr(char *s, char c)
{
	char *isCharFind = NULL;

	if (s != NULL)
	{
		do {
			if (*s == (char)c)
			{
				isCharFind = s;
				break;
			}
		} while (*s++);
	}
	return (isCharFind);
}
