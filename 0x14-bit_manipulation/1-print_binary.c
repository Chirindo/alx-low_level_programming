#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary
 * @n: integer
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int num = 1;

	num <<= (sizeof(unsigned long int) * 8 - 1);
	int found_first_one = 0;

	while (num)
	{
		if (n & num)
		{
			putchar('1');
			found_first_one = 1;
		}

		else
		{
			if (found_first_one)
			{
				putchar('0');
			}
		}
		num >>= 1;
	}
	if (!found_first_one)
	{
		putchar('0');
	}
}
