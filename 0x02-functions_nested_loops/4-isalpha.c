#include "main.h"

/**
 * _isalpha - check for alphbet character
 * @c:Take in a character in ASCII code
 * Return: 1 if c is letter, lowercase or uppercase, 0 if otherwish
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
