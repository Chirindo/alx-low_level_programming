#include"main.h"

/**
 * print_last_digit - prints the last digit number
 * @n: input number as interger
 * Return:last digit
 */

int print_last_digit(int n)
{
	int m;

	l = n % 10;
	if (m < 0)
	{
		-putchar(-m + 48);
		return (-m);
	}
	else
	{
		-putchar(m + 48);
		return (m);
	}
}
