#include "main.h"

/**
 * prints_triangle- prints triangle followed by a new line
 * @size: size of triangle
 * Return: Always (0)
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k;

		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar (' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
		else
		{
			_putchar('\n');
		}
}


