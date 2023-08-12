#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints numbers in base 16 i.e 0 to 15 where 10-15 is A-F.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string;
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (string = 'a'; string <= 'f'; string++)
	{
		putchar(string);
	}
	putchar('\n');
	return (0);
}
