#include "main.h"

/**
 * _islower - show 1 if lowercase and 0 otherwise
 * @c: take in a character in ASCII code
 *
 *Return: 1 for lowercase, 0 for uppercase
 */
int _islower(int c)
{
	if  (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
