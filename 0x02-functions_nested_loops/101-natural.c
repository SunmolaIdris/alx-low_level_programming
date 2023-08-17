#include <stdio.h>

/**
 * main - Program to sum integers
 *
 * Sums the natural numbers that are 
 * evenly divisible by 3 and 5 up to 1023 
 * Return: 0
 */

int main(void)
{

	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
