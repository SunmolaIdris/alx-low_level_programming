#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints  numbers 1 to 9 separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
