#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters
 * a string to uppercase.
 * @s: an input string
 * Return: upper case string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
