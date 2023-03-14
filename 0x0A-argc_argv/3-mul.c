#include <stdio.h>
#include <stdlib.h>


/**
 * main - multiplies two numbers
 * @argc: number of argments
 * @argv: array of argments
 *
 * Return: 0 (success), 1 (error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
