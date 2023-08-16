#include "main.h"

/**
 * main -  This is my main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	int i;

	i = 0;

	while (i < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
