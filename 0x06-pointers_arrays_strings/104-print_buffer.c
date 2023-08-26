#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{

	int i, j;

	i = 0;

	while (i < size)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", (unsigned char)b[j]);
			else
				printf("  ");
			if (j % 2)
				putchar(' ');
		}
		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
				break;

			if (b[j] >= ' ' && *(b + j) <= '~')
				putchar(*(b + j));
			else
				putchar('.');
		}
		i += 10;
		if (i < size)
			putchar('\n');
	}
	putchar('\n');
}
