#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints numbers to 14
 * Return: returns nothing
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int num;

		for (num = 0; num <= 14; num++)
		{
			printf("%d", num);
		}
		printf("\n");
	}
}
