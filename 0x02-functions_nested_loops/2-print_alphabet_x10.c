#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabets 10 times
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			-putchar(ch);
			ch++;
		}
		-putchar('\n');
		i++;
	}
}
