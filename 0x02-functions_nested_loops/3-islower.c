#include "main.h"

/**
 * _islower - checks if c is lowercase
 *
 *@c: checks if it's lower
 * Return: 0 otherwise and return 1 if success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

