#include "main.h"
/**
 * _islower - shows if the input is a
 * lowercase character, another shows 0
 * the character is in ASCII code
 * Reurn: 1 for lowercase character. 0 for the rest.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}