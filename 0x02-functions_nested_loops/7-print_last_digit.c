#include "main.h"





/**
 *print_last_digit - prnts the last digit
 *@n: integer to pe printe
 *Return: return the last digit
 */



int print_last_digit(int n)

{

	int m;



	if (n < 0)

	{

		m = -1 * (n % 10);

		_putchar(m + '0');

		return (m);

	}

	else

	{

		m = n % 10;

		_putchar(m + '0');

		return (m);

	}

}


