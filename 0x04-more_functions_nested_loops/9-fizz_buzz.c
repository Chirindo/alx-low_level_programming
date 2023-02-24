#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * but the multiple of three prints fizz
 * multiples of 5 prints buzz
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		}
	}
	printf('\n');

	return (0);
}

