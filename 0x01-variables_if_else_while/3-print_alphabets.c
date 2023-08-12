#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string;

	for (string = 'a'; string <= 'z'; ++string)
	{
		putchar(string);
	}
	for (string = 'A'; string <= 'Z'; ++string)
	{
		putchar(string);
	}
	putchar('\n');

	return (0);
}
