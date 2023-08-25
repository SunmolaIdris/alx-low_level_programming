#include "main.h"

/**
 * reverse_array -Function that reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{

	int i, temp;

	i = 0;
	temp = 0;

	n = n - 1;

	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
