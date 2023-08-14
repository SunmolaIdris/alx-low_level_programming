#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints numbers in base 16i.e 0-9 , a-f.
 *
 * Return: Always 0 for (Success)
 */
int main(void)
{
	char character;
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (character = 'a'; character <= 'f'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
