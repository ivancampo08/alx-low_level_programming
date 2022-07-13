#include "main.h"

/**
 * print_last_digit -> printsthe last digit
 * @n: the passed rags
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
	{
		_putchar(-x + 48);
		return (-x);
	}
	else
	{
		_putchar (x + 48);
		return (x);
	}
}
