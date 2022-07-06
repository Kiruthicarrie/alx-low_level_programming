#include "main.h"

/**
 * _isalpha - checks if c is lower or upper
 *
 * @c: checks c is lower or upper case
 * Return: 0 if success else otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'z' && c <= 'a'))
	{
		return (1);
	}
		return (0);
}
