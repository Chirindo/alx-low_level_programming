#include <stdio.h>
#include "main.h"
/**
 * times_table - prints all possible combination
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar('.');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
