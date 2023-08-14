#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always return zero for (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
		putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
