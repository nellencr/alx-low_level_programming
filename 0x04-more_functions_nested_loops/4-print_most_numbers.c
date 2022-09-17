#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: returns nothing
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		if ((num == 2 || num == 4))
		{
			num++;
			continue;
		}
		printf("%d", num);
		num++;
	}
	printf("\n");
}

