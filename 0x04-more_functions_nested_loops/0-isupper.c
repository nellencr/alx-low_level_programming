#include "main.h"
/**
 *  _isupper - A function that checks for uppercase character.
 *  @c: An input character
 *  Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char upper_case;
	int is_upper = 0;

	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		if (c == upper_case)
		{
			is_upper = 1;
		}
	}
	return (is_upper);
}
