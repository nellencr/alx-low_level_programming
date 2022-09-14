#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 * Return: nothing.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char alphabet_;

		for (alphabet_ = 'a'; alphabet_ <= 'z'; alphabet_++)
		{
			_putchar(alphabet_);
		}
		_putchar('\n');
	}
}
