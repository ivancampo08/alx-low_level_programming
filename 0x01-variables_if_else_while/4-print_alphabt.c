#include <stdio.h>

/**
*main - assign a random number to the variable
*description - prints the alphabet in lowercase
*Return: 0 if exited properly,non-zero otherwise
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
		putchar (10);
		return (0);
}
