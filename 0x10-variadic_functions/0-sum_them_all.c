#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int index;
	int sum = 0;

	/* initialize the argument list from the start */
	va_start(list, n);

	/* iterate through all values*/
	for (index = 0; index < n; index++)
	/* get the next parameter value and add it to sum*/
		sum += va_arg(list, int);
	
	/*terminate the list*/
	va_end(list);

	return (sum);
}


