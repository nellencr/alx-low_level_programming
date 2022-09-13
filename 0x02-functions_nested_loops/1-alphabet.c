#include "main.h"
/**
 * print_alphabet - in lower case followed by line.
 * Return : nothing
 */
void print_alphabet(void)
{
	char alphabet_;

	for (alphabet_ = 'a'; alphabet_ <= 'z'; alphabet_++)
		_putchar(alphabet_);
	_putchar('\n');
}

