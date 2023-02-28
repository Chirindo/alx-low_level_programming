#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - prints a string followed by a new line
 * @str: string function
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{	
		putchar(*str);
	}
	putchar('\n');
}
