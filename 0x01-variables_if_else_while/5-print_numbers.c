#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints numbers 0 to 9 with spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
