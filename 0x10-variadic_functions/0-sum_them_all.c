#include <stdarg.h>
#include "variadic_fuctions.h"

/**
 * sum_them_all - returns the sum
 * @n: number of paramenters
 * @...: variadic function
 * Return: if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
