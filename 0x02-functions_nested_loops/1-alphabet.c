#include "main.h"

/**
 * print_alphabet - this is the main function
 *
 * Return: 0 if success
 */

void print_alphabet(void)
{
	int lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		_putchar(lcase);
	}
	_putchar('\n');
}
