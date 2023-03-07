#include "main.h"

/**
 * _memset - fills memory with a constant value
 * @s: start address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to the changed
 * Return: changed array with new value for n bytes
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
