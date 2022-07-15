#include "main.h"
#include <string.h>

/**
* _strncyp - copies a string
* @dest: destinantion.
* @src: source.
* @n: amount of bytes from src.
* Return: the pointer to dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
