#include "main.h"

/**
 * more_numbers - printing more numbers
 *
 * return: Return numbers 0 to 14
 */

void more_numbers(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = 0; y <= 14; y++)

		{
			if (y > 9)

		{
				_putchar('0' + y / 10);

			}

				_putchar('0' + y % 10);
		}
		_putchar('\n');
	}
}
