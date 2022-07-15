#include "main.h"

/**
* _strncat -> function to append some charcters
* @dest: first param
* @src: second param
* @n: third param
* Return: string
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
		return (dest);
}
