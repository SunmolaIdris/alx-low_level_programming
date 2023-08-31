#include "main.h"

/**
 * prime_checker - checks recursively if the number is prime
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int prime_checker(int n, int i)
{
	if (i == 1)
		return (1); 
        if (n % i == 0 && i > 0)
                return (0);
	return (actual_prime(n, i - 1));
}

/**
 * is_prime_number - Tells if an integer is a prime number or not
 * @n: number to check
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, n - 1));
}


