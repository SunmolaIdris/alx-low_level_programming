#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Is the main function declaration with no argument and returns 0
 *
 * Return - Always return an integer type whose value is 0 for (Success)
 */
int main(void)
{
	char letter;
	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);

		letter++;
	}
	putchar('\n');

	return (0);
}
