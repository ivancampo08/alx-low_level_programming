#include <stdio.h>

/**
* main - prints the lowercase alphabet in reverse
* Return: 0 if exited properly,non-zero otherwise
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
