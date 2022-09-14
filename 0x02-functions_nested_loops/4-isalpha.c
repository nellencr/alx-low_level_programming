#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: An input character
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
