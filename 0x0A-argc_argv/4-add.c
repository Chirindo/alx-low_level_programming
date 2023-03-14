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
	int result = 0, num, i, j, k;

for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (argv[i][j] > '9' || argv[i][j] < '0')
		{
		printf("%s\n", "error");
		return (1);
		}
	}
}
for (k = 1; k < argc; k++)
{
	num = atoi(argv[k]);
	result += num;
}
printf("%d\n", result);
return (0);
}
