#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: The number of arguments passed to the function
 * @...: Variable number of paramters to calculate the sum of.
 * Return: Resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
