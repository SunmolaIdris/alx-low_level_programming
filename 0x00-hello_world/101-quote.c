#include <stdio.h>
#include <unistd.h>
/**
* main - main function in the task 101 for hello world
*printing without the use of put and printf
*i.e using write function and that includes using unistd.h library
*
*
*Return: return 1 for this program
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
