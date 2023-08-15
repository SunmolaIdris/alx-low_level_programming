#include <stdio.h>
#include <stdlib.h>
/**
 *Main - main function for task 101-print_comb4.c
 *
 *
 *Return - Always return the integer 0 for success
 */
int main() 
{
	int hundred;
	int tens;
	int unit;
	int number;

	for (number = 0; number < 1000; number++)
	{
		hundreds = number / 100;
		tens = (number / 10) % 10;
		ones = number % 10;

		if (hundred < tens && tens < unit)
		{
			putchar(hundred + '0');
			putchar(tens + '0');
			putchar(unit + '0');

			if (number < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
