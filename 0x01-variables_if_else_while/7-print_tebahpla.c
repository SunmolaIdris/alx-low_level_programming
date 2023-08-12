#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints in reverse the lower case alphhabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; --letter)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
