#include <stdio.h>

/**
*main -> assign a random number to the variable n each time its
*executed and print based on condition
*Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
int n;

if (n > 0)
	printf("%d is positive\n", n);
if (n == 0)
	printf("%d is zero\n", n);
if (n < 0)
{
	printf("%d is negative\n", n);
}
return (0);
}
