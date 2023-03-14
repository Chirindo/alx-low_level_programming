#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments received
 * @argc: number of argments
 * @argv: array of argumwnts
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s/n", argv[i]);
	}
	return (0);
}
