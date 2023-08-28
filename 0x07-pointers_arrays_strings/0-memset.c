#include "main.h"

/**
 * *_memset - Function fills memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte b to be copied
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}
