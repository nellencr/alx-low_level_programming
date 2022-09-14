#include "main.h"
/**
 * print_sign - function that prints the sign of a number.
 * @n: An input number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative.
 */
int print_sign(int n)
{

	if (n >= 0)
	{
		return (1);
	}
	else if (n <= 0)
	{
		return (-1);
	}
	else
		return (0);
}
