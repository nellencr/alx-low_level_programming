#include <stdio.h>
/**
 * main - Print alphabet in lower case.
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

		putchar('\n');
	return (0);
}

