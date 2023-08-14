#include <stdio.h>
#include <ctype.h>
/**
*main - Program to print alphabets a-z 
*
*Return: return 0 for (success)
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

