#include"main.h"

/**
 * print_last_digit - prints the last digit number
 * @n: input number as interger
 * Return:last digit
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		-putchar(-l + 48);
		return (-l);
	}
	else
	{
		-putchar(l + 48);
		return (l);
	}
}
