#include "main.h"

/**
 * print_sign - print-sign
 * @n: n is an integer
 * Return: 0 or 1 or -1
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
