#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all the alphabet in lowercase except q and e, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		if (letter != 'e' && letter != 'q')
		{
		putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
