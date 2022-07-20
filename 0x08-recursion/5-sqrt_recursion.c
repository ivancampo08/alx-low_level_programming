#include "main.h"

/**
* _sqrt_recursion - sprt using recursion
* @n: parameter tobe sqrt
* Return: square root of a number
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
* _sqrt - recursive square root
* @n: number
* @i: iterator
* Return: a number
*/
int _sqrt(int n, int i)
{
	int sqaure = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
