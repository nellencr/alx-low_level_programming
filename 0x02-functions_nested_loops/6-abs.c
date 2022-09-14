#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @a: An integre input
 * Return: Absolut value of number a;
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = (-1) * a;
		return (a);
	}
	else
		return (a);
}
