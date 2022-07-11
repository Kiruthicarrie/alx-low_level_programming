#include "main.h"

/**
 * print_triangle - prints triangle
 * @s: parameter
 * Return: null
 */

void print_triangle(int s)
{int x, y, z;
if (s > 0)
{

for (x = 0; x < s ; x++)

{

for (y = s - x ; y > 1 ; y--)

_putchar(32);

for (z = 0 ; z <= x ; z++)

_putchar (35);

_putchar('\n');

}

}

else

_putchar ('\n');

}


