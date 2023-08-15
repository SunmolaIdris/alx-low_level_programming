#include <stdio.h>
#include <stdlib.h>
/**
* Main - Main function for task 100 100-print_comb3.c
*
*
* Return - Always return integer value 0 for success
*/
int main()
{
	int number = 0;
	int tens;
	int unit;

	while (number <= 99)
	{
		tens = number % 10;
		unit = number / 10;

		if (unit < tens)
		{
			putchar(unit + '0');
			putchar(tens + '0');
			if (number < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		number++;
	}
	putchar('\n');
	return (0);
}
