#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Is the main function declaration with no argument and returns 0
 *
 * Return: Always return an integer type whose value is 0 for (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
