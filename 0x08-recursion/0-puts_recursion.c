#include "main.h"

/**
 * _put_recursion - prints a string followed by anew line
 * @s: the string to print
 * Return: always 0
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}