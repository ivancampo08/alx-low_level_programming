#include "main.h"

/**
* _strncyp - copies a string
* @dest: destinantion.
* @src: source.
* @n: amount of bytes from src.
* Return: the pointer to dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for ( ; i < n; i++)

		return (dest);
}
