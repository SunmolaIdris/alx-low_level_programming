#include "main.h"

int sqrt_solver(int n, int i);

/**
 * _sqrt_recursion - This function returns
 * the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_solver(n, 0));
}

/**
 * sqrt_solver - is the solving function that
 * provides the sqrt solution when called
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int sqrt_solver(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_solver(n, i + 1));
}
