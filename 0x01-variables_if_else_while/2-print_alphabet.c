#include <stdio.h>

/**
* main - this is the main function
* description - program that prints the alphabet in lowercase
* Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar (10);
	return (0);
}
