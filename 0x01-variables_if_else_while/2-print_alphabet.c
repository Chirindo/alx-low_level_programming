#include <stdio.h>
/**
 * main - 'Print alphabets lowercase'
 * Return: 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
		for (i = 0; i < 26; i++)
		{
			putchar(alp[i]);
		}
	putchar('\n');
}	
