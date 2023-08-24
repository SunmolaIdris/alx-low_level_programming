#include "main.h"

/**
 * _strncat -  Function joins n bytes from a string to another
 * @dest: Destination string
 * @src: source string
 * @n: number of bytes of string to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;

	}


	return (dest);
}
