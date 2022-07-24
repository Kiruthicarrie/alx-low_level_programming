#include "main.h"

/**
 * _memcpy - main functoin
 * @dest: chaer array
 * @src: src array
 * @n: unassigned int
 * Return: return string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{



unsigned int i;

for (i = 0 ; i < n ; i++)

dest[i] = src[i];



return (dest);

}
