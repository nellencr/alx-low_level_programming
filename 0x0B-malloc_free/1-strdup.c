#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>


/**
 * _strdup - return pointer of newly allocated memory
 *
 * @str: char type
 * Return:  length of string
 */

char *_strdup(char *str)
{
	char *newstr;

	newstr = malloc(strlen(str) + 1);
	if (newstr == NULL)
		return (0);
	strcpy(newstr, str);

	return (newstr);
}

