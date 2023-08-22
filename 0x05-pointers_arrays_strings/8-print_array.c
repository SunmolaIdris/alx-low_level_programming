#include <stdio.h>
#include "main.h"

/**
 * print_array - Function prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
		printf("\n");
}
