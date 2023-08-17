#include "stdio.h"

/**
 * main - Sum of the even-valued terms of fibonaci
 *
 *
 * Return: 0 for success
 */

int main(void)
{
	long int f1, f2, f3, sum;

	f1 = 0;
	f2 = 0;
	f3 = 1;
	sum = 0;

	while (f2 < 4000000)
	{
		f2 = f1 + f3;
		f1 = f3;
		f3 = f2;

		if (fib2 % 2 == 0)
		{
			sum += f2;
		}

	}
	printf("%ld\n", sum);

	return (0);
}
