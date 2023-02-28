#include "main.h"

/**
 * _strlen - returns the leghth of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)

{
	int len = 0;

	while (*s != '\0')
	{
		len += 1;
		*s = *s + 1;
	}
	return (len);
}
