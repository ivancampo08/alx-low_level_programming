#include <stdio.h>

/**
*main - assign a random number to the variable
*description -  print the last digit of the number stored
*Return: 0 if exited properly, non-zero otherwise
*/

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}

