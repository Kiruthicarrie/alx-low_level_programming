#include "main.h"


/**
 * print_alphabet_x10 - main prints lowercase 10 times
 *
 * return: 0 if success
 */

void print_alphabet_x10(void)
{
	int j, lowercase;

	for (j = 1; j <= 10; j++)
	{
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		{
			_putchar(lowercase);
		}
		_putchar('\n');
	}
}
