#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabets 10 times
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar(j);
	}
}
