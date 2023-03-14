#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates arrays of chars, and intializes it
 * @size: size of array
 * @c: char to be assigned
 * Description: creates arrays of chars, and intializes it
 * Return: pointer to array, null if fail
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *array = (char *) malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
