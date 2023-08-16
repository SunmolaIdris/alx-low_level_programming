#include "main.h"

/**
 * print_alphabet_x10 -  This is the name of my function
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char x;
	int i;

	i = 0;

	while (i < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
