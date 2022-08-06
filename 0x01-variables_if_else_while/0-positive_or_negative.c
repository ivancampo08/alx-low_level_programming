#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
* main -> assign a random number to the variable n each time
* it is executed and print based on condition
* Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
	int n;

	srand(time(0));
	n = srand() - RAND_MAX / 2;
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
