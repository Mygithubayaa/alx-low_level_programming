#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all-suming
 * @n:intger
 * @...:variadic
 * Return:0 or intger
*/

int sum_them_all(const unsigned int n, ...)
{
	 va_list ao;

	unsigned int i;

	int sum;

	sum = 0;

	if (n == 0)
	return (0);

	va_start(ao, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ao, int);
	}
	va_end(ao);

	return (sum);
}
