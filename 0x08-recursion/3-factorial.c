#include "main.h"

/**
 * factorial - a function that finds the factorial of *n
 *
 * @n: positive number
 *
 * Return: factorial of @n
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
