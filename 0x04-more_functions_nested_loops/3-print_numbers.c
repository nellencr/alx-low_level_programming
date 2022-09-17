#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that print all numbers from
 * 0 to 9
 * Return: returns nothing
 */
void print_numbers(void)
{
	char num = '0';
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	
}
