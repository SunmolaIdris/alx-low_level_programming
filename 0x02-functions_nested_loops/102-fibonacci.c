/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: 0 for success
 */

int main(void)
{
	long int f1  = 0;
	long int f2  = 1;
	long int f3;
	long int count = 1;

	while (count <= 50)
	{
		f3 =  f2 + f1;
		count++;
		printf("%ld", f3);

		if (count <= 50)
			printf(", ");
		f1 = f2;
		f2 = f3;
	}
	printf("\n");

	return (0);

}
