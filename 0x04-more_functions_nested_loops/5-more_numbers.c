#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints numbers to 14
 * Return: returns nothing
 */
void more_numbers(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int num;

		for (num = 1; num <= 14; num++)
		{
			printf("%d", num);
		}
		printf("\n");
	}
}
