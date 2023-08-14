#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the alphabets in lowercase.
 *
 * Return: Always return 0 i.e (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
