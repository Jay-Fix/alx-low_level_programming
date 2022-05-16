#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @p: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int p, ...)
{
	va_list valists;
	unsigned int i;
	int sum = 0;



	if (p == 0)
		return (0);

	va_start(valists, p);

	for (i = 0; i < p; i++)
		sum += va_arg(valists, int);

	va_end(valists);

	return (sum);
}
