#include "main.h"
/**
 * _isalpha - Shows one if the input
 *  is a letter from another case
 *
 *  comment: the character is ASCII code
 *
 *  Return: 1 for letter. 0 for the rest
 */

int _isapha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
