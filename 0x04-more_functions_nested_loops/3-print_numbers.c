#include "main.h"

/**
<<<<<<< HEAD
 * print numbers - prints numbers from 0 to 9
 * followed by a new line
=======
 * print numbers - prints numbers 0 to 9
>>>>>>> 8e56aea81815ec70d76d9502662b12fcc09f61cb
 *
 * Return: Always 0
 */
void print_numbers(void);
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
